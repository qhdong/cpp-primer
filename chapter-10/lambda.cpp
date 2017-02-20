#include <iostream>

using namespace std;

int func1() {
    int a = 42;
    auto f = [a] {return a;};
    a = 0;
    return f();
}

void func3() {
    size_t v1 = 42;
    auto f = [&v1] { return ++v1; };
    v1 = 0;
    auto j = f();
    cout << j << " " << v1 << endl;
}

int main() {
    int secret = 42;
    auto sum = [secret](int a) {
        return a + secret;
    };

    int a;
    cin >> a;
    cout << sum(a) << endl;

    cout << func1() << endl;

    func3();

    return 0;
}

