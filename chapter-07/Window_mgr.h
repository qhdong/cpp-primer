#ifndef _WINDOW_MGR_H_
#define _WINDOW_MGR_H_

#include <vector>
#include "Screen.h"

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
    ScreenIndex addScreen(const Screen&);
private:
    std::vector<Screen> screens {Screen(24, 80)};
}

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.width, s.height);
}

Window_mgr::ScreenIndex Window_mgr::addScreen(const Screen &screen) {
    screens.push_back(screen);
    return screens.size() - 1;
}

#endif
