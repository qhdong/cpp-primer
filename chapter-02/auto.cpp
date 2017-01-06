#include <iostream>

int main() {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;

//     a = 42; // int 42
//     b = 42; // int 42
//     c = 42; // int 42
//     d = 42; // int* 42
//     e = 42; // const int* 42
//     g = 42; // int& 42
    // auto &cc = 42;
    const auto &cc = 42;

    return 0;
}
