#include <iostream>

using std::cout;
using std::endl;

void f(int a) {
    cout << "f(" << a << ")" << endl;
}

void f(int a, int b) {
    cout << "f(" << a << ", " << b << ")" << endl;
}

void f(double a, double b = 2.2) {
    cout << "f(" << a << ", " << b << ")" << endl;
}

int calc(char *a, char *b) {
    return 1;
}

// char *const a --> char *a 因为是顶层const,可以忽略
// int calc(char *const a, char *const b) {
//     return 2;
// }

int main() {
    f(2.3);

    char *pa, *pb;
    cout << calc(pa, pb) << endl;

    return 0;
}
