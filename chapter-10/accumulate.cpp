#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::accumulate;
using std::vector;
using std::string;

int main() {
    vector<string> vs{"hello", "baby", "yes"};
    auto res = accumulate(vs.cbegin(), vs.cend(), string(""));
    cout << res << endl;

    vector<double> vi;
    for (int i = 0; i < 100; ++i) {
        vi.push_back(i/2.0);
    }
    cout << accumulate(vi.cbegin(), vi.cend(), 0.0) << endl;

    return 0;
}
