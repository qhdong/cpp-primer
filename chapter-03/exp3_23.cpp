#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::vector;

int main() {
    vector<int> v;
    for (int i = 1; i <= 10; ++i) {
        v.push_back(i);
    }

    for (auto it = v.begin(); it != v.end(); ++it) {
        *it *= *it;
    }

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
