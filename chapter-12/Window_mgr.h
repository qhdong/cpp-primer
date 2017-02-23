#ifndef __WINDOW_MGR_H_
#define __WINDOW_MGR_H_

#include <vector>
#include <string>
#include "Screen.h"

class WindowMgr {
public:
    using ScreenIndex = std::vector<std::string>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(80, 24, ' ')};
};

void WindowMgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.width * s.height, ' ');
};
#endif
