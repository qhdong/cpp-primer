#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

    map<string, vector<int>> m;
    m.insert({"hello", {2, 3, 4}});

    for (const auto &p : m) {
        cout << p.first << " ";
        for_each(p.second.begin(), p.second.end(),
                [](const int &x) {cout << x << " "; });
    }

    multimap<string, string> authors;
    authors.insert({"Donald", "TLNP"});

    return 0;
}

