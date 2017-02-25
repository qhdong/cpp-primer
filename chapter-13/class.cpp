#include <iostream>

using namespace std;

class X {
public:
    X(int i): i(i) { cout << "X(" << i << ")" << endl; }
    ~X() { cout << "~X(" << i << ")" << endl; }
    X(const X &oring) {
        i = oring.i;
        cout << "X(const X&), " << i << endl;
    }
    X& operator=(const X &rhs) {
        i = rhs.i;
        cout << "X& operator(const X&) " << i << endl;
        return *this;
    }
private:
    int i;
};

X foo(X x) {
    return x;
}

int main() {
    X x1(1);
    // X x2(x1);
    // X x3 = x1;

    cout << "call foo(x1)" << endl;
    X x2 = foo(x1);

    return 0;
}
