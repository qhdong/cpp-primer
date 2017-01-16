#ifndef _SCREEN_H_
#define _SCREEN_H_

#include <iostream>
#include <string>
#include "Window_mgr.h"

class Screen {
public:
    using pos = std::string::size_type;

    // friend class Window_mgr
    friend void Window_mgr::clear(ScreenIndex);

    Screen() = default;
    Screen(pos ht, pos ws): height(ht), width(ws) { }
    Screen(pos ht, pos ws, char c):
        height(ht), width(ws), contents(ht * ws, c) { }
    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const;
    Screen &set(char c);
    Screen &set(pos r, pos c, char ch);
    Screen &move(pos r, pos ch);
    Screen &display(std::ostream &os) {
        do_display(os);
        return *this;
    }
    pos size() const;
    const Screen &display(std::ostream &os) const {
        do_display(os);
        return *this;
    }

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &os) const {
        os << contents;
    }
};

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen& Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch) {
    contents[r * width + c] = ch;
    return *this;
}

inline Screen::pos Screen::size() const {
    return width * height;
}

#endif
