#include <iostream>

int main() {

    int i = 42;
    const int &r1 = i;
    double dval = 3.3;
    const int &r4 = dval;

    std::cout << r4 << std::endl;

    int &rr = i;
    rr = 0;
    // r1 = 0;

    const int ci = 22;
    const int *pi = &ci;
    std::cout << pi << std::endl;
    // *pi = 10;
    pi = &i;
    std::cout << pi << std::endl;

    const int v2 = 20;
    const int *const pv2 = &v2;
    // *pv2 = 30;
    // pv2 = &i;

    return 0;
}
