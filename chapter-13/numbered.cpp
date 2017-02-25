#include <iostream>

using namespace std;

class Numbered {
public:
    Numbered(): mysn(++cnt) { }
    Numbered(const Numbered& oring): mysn(++cnt) { }
    Numbered& operator=(const Numbered &rhs) {
        mysn = ++cnt;
        return *this;
    }
    size_t mysn;
    static size_t cnt;
};

size_t Numbered::cnt = 0;

void f(const Numbered &s) {
    cout << s.mysn << endl;
}

int main() {
    Numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);

    return 0;
}
