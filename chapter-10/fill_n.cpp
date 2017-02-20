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
using std::fill_n;
using std::back_inserter;

int main() {
    vector<int> vi;
    fill_n(back_inserter(vi), 10, -1);
    for (auto i : vi) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
