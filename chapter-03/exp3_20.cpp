#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main() {
    vector<int> v;
    for (int i; cin >> i;) {
        v.push_back(i);
    }

    for (auto it = v.cbegin(); it != v.cend()-1; ++it) {
        cout << *it + *(it+1) << " ";
    }
    cout << endl;

    for (auto i = v.cbegin(), j = v.cend()-1; i < j; ++i, --j) {
        cout << *i + *j << " ";
    }
    cout << endl;

    return 0;
}
