#include <iostream>

int main() {
    // int i = -1, &r = 0; // wrong
    // const int i = -1, &r = 0;
    int i = -1;
    const int i2 = i, &r2 = i;
    const int *p;

    return 0;
}
