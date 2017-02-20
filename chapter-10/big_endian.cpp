#include <iostream>

using namespace std;

bool is_bigendian() {
    union w {
        int a;
        char b;
    } x;
    x.a = 1;
    return x.b != 1;
}

bool is_little_endian() {
    int a = 1;
    return *(char*)&a == 1;
}

int main() {
    int a = 0xabcd1234;
    char c = ((char*)&a)[0];
    cout << c << endl;

    if (is_bigendian()) {
        cout << "big endian";
    } else {
        cout << "little endian";
    }
    cout << endl;

    cout << is_little_endian() << endl;


    return 0;
}
