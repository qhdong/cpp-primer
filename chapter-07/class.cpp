#include <iostream>

class Y;
class X {
    Y *py;
};

class Y {
    X x;
};


int main() {
    X x;
    Y y;
    return 0;
}
