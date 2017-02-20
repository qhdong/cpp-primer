#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::accumulate;
using std::vector;
using std::list;
using std::string;
using std::equal;
using std::fill;

int main() {
    vector<int> vi;
    vi.resize(10);
    fill(vi.begin(), vi.end(), -1);
    for (auto i : vi) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
