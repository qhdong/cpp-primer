#include <iostream>
#include <string>
#include <initializer_list>

using std::cout;
using std::endl;
using std::string;
using std::initializer_list;

void error_msg(initializer_list<string> list) {
    for (const auto &it : list) {
        cout << it << " ";
    }
    cout << endl;
}

long sum(initializer_list<int> list) {
    long s = 0;
    for (const int &e : list) {
        s += e;
    }
    return s;
}

int main() {
    error_msg({"hello", "world"});
    error_msg({"Fucking", "Hard"});

    cout << sum({1, 2, 3, 4, 5}) << endl;

    return 0;
}

