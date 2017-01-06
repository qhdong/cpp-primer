#include <iostream>

int main() {
    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    // decltype(cj) z;
    int i = 42, *p = &i;
    // decltype(*p) c; // int&, 解引用操作生成引用
    decltype(i) d;
    // decltype((i)) e;


    return 0;
}
