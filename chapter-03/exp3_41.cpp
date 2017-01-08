#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;

int main() {
    int a[] = {1, 2, 3};
    vector<int> v(begin(a), end(a));

    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
