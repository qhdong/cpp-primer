#include <iostream>

int main() {
    int i = 10, &ri = i;
    ri = 20;
    std::cout << i << "  " << ri << std::endl;

    int &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14158;
    r2 = r1;
    i = r2;
    r1 = d;

    return 0;
}
