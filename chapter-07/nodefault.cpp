#include <iostream>
#include <vector>

using std::vector;

class NoDefault {
public:
    int x;
    NoDefault(int i): x(i) { }
};

class C {
    NoDefault n;
public:
    C(): n(0) { }
};

int main() {
    C c;
    vector<NoDefault> vec(10, 2);

    for (auto nodefault : vec) {
        std::cout << nodefault.x << std::endl;
    }

    vector<C> vec_c(10);

    return 0;
}
