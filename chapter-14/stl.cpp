#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main() {
    vector<int> vi = {9, 5, 3, 4, 5, 6, 7, 8};
    auto it1 = vi.begin();
    auto it2 = vi.begin() + 1;
    auto it3 = vi.begin() + 2;
    cout << min({*it1, *it2, *it3}) << endl;

    return 0;
}
