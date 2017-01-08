#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

int main() {
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp) {
        cout << *cp << endl;
        ++cp;
    }

    char a[20] = "hello, world";
    char b[] = " Aaron";
    char c[100];
    strcat(a, b);
    strcpy(c, a);
    cout << c << endl;

    return 0;
}
