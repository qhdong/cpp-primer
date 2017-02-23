#include <iostream>

using namespace std;

char* cat(const char *s1, const char *s2) {
    size_t len_s1 = 0;
    const char *ps1 = s1;
    while (*ps1++) ++len_s1;
    size_t len_s2 = 0;
    const char *ps2 = s2;
    while (*ps2++) ++len_s2;

    char *p = new char[len_s1 + len_s2 + 1]();
    auto ps = p;
    while (*ps++ = *s1++) ;
    --ps;
    while (*ps++ = *s2++) ;

    return p;
}

int main() {
    // const char s[] = "hello";
    // cout << sizeof(s) << endl;
    auto ps = cat("hello", ", world!");
    cout << ps << endl;

    delete[] ps;

    return 0;
}
