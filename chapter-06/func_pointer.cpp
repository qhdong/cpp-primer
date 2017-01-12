#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int add2(int a, int b) {
    return a + b;
}

int sub2(int a, int b) {
    return a - b;
}

int mul2(int a, int b) {
    return a * b;
}

int div2(int a, int b) {
    return a / b;
}

int main() {
    // vector<int (*)(int, int)> pv;
    // vector<decltype(f)*> pv;
    // typedef int (*pf)(int, int);
    using pf = int(*)(int, int);
    vector<pf> pv{add2, sub2, mul2, div2};
    // vector<pf> pv = {add, sub, mul, div};
    // vector<pf> pv;
    // pv.push_back(add2);
    // pv.push_back(sub2);
    // pv.push_back(mul2);
    // pv.push_back(div2);

    int a = 10, b = 20;
    for (auto f : pv) {
        cout << f(a, b) << endl;
    }

    return 0;
}
