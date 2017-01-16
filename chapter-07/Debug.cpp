#include <iostream>

using std::cout;
using std::endl;

class Debug {
public:
    constexpr Debug(bool b = true): hw(b), io(b), other(b) { }
    constexpr Debug(bool h, bool i, bool o): hw(h), io(i), other(o) { }
    constexpr bool any() {
        return hw | io | other;
    }

    void set_io(bool b) {
        io = b;
    }

    void set_hw(bool b) {
        hw = b;
    }

    void set_other(bool b) {
        other = b;
    }

private:
    bool hw;
    bool io;
    bool other;
};

int main() {
    constexpr Debug io_sub(false, true, false);
    if (io_sub.any()) {
        std::cerr << "error message" << std::endl;
    }

    return 0;
}

