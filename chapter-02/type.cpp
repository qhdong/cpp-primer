#include <iostream>

// using SI = Sales_item;
using wage = double;
using pstring = char*;
// using cpstring = const char*;
typedef const char *cpstring;

int main() {
    const pstring cstr = "hello, world";
    const char *cstr2 = "hello, world";
    cpstring cstr3 = "hello";
    // cstr = 0;
    cstr2 = 0;
    cstr3 = 0;
    const pstring *ps;
    std::cout << cstr << std::endl;

    return 0;
}
