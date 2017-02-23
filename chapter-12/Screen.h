#ifndef __SCREEN_H_
#define __SCREEN_H_

#include <string>
#include <iostream>

class Screen {
public:
    typedef std::string::size_type pos;
    // friend void WindowMgr::clear(ScreenIndex);
    friend class WindowMgr;

    Screen() = default;
    Screen(pos wd, pos ht, char ch):
        width(wd), height(ht), contents(std::string(wd * ht, ch)) {}

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r * width + c]; }
    Screen& move(pos r, pos c);
    Screen& set(char ch);
    Screen& set(pos row, pos col, char ch);

    Screen& display(std::ostream &os) { do_display(os); return *this; }
    const Screen& display(std::ostream &os) const {
        do_display(os); return *this;
    }

private:
    pos width = 0;
    pos height = 0;
    pos cursor = 0;
    std::string contents;

    void do_display(std::ostream &os) const { os << contents; }
};

Screen& Screen::move(pos r, pos c) {
    cursor = r * width + c;
    return *this;
}

Screen& Screen::set(char ch) {
    contents[cursor] = ch;
    return *this;
}

Screen& Screen::set(pos row, pos col, char ch) {
    contents[row * width + col] = ch;
    return *this;
}

#endif
