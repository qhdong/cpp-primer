#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned long fact(unsigned int x) {
    unsigned long ret = 1UL;
    while (x > 1) {
        ret *= x--;
    }
    return ret;
}

unsigned long fact2(unsigned int x) {
    if (x == 1) return 1;
    return x * fact2(x-1);
}

int main() {
    do {
        cout << "Input a number: ";
        unsigned int x;
        cin >> x;
        // cout << "fact(" << x << ") = " << fact(x) << endl;
        cout << "fact2(" << x << ") = " << fact2(x) << endl;
    } while (cin);

    return 0;
}

