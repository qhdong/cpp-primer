#include <iostream>

using namespace std;

char* get_input(istream &in) {
    char c;
    size_t sz = 16;
    char *pc = new char[sz];
    auto p = pc;

    size_t count = 0;
    while (in >> c) {
        if (++count > sz) {
            sz *= 2;
            char *pnew = new char[sz];
            for (size_t i = 0; i < count; ++i) {
                pnew[i] = pc[i];
            }
            delete[] pc;
            pc = pnew;
            p = pc + count - 1;
        }
        *p++ = c;
    }
    *p = '\0';

    return pc;
}

int main() {
    auto ps = get_input(cin);

    cout << ps << endl;

    delete[] ps;

    return 0;
}
