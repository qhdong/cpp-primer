#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <utility>

using namespace std;

pair<string, int> process(const vector<string> &v) {
    if (!v.empty()) {
        return {v.back(), v.back().size()};
    } else {
        return pair<string, int>();
    }
}

int main() {
    vector<string> v(10, "a");
    list<int> lst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<pair<string, int>> pv;
    for (const auto &a : v) {
        for (const auto &b : lst) {
            pv.push_back(make_pair(a, b));
        }
    }

    return 0;
}

