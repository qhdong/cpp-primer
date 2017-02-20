#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::accumulate;
using std::vector;
using std::list;
using std::string;
using std::equal;
using std::fill;
using std::copy;
using std::begin;
using std::end;
using std::replace;
using std::replace_copy;
using std::back_inserter;

int main() {
    int a[10];
    fill(begin(a), end(a), -1);
    int b[sizeof(a) / sizeof(*a)];
    copy(begin(a), end(a), b);
    vector<int> iv;

    replace(begin(b), end(b), -1, 42);

    replace_copy(begin(a), end(a),
            back_inserter(iv), -1, 33);

    for (auto i : iv) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
