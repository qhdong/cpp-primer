#include <iostream>
#include <functional>
#include <map>
#include <string>

using namespace std;

int add(int a, int b) {
    return a + b;
}

struct divide {
    int operator()(int a, int b) {
        return a / b;
    }
};

int main() {
    int (*fp)(int, int) = add;
    map<string, function<int(int, int)>> binops = {
        {"+", fp},
        {"-", minus<int>()},
        {"*", [](int a, int b) { return a * b; }},
        {"/", divide()}
    };

    cout << binops["+"](1, 2) << endl;
    cout << binops["-"](1, 2) << endl;
    cout << binops["*"](1, 2) << endl;
    cout << binops["/"](1, 2) << endl;

    return 0;
}
