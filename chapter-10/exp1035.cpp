#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    for (auto it = (v.end() - 1); it != v.begin(); --it) {
        cout << *it << " ";
    }
    cout << *v.begin() << endl;
    return 0;
}
