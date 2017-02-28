#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int get_ugly(int index) {
    if (index <= 0) return 0;
    vector<int> uglys(index);
    uglys[0] = 1;
    int next_ugly = 1;
    auto it2 = uglys.begin();
    auto it3 = uglys.begin();
    auto it5 = uglys.begin();

    while (next_ugly < index) {
        uglys[next_ugly] = min({*it2 * 2, *it3 * 3, *it5 * 5});
        while (*it2 * 2 <= uglys[next_ugly]) ++it2;
        while (*it3 * 3 <= uglys[next_ugly]) ++it3;
        while (*it5 * 5 <= uglys[next_ugly]) ++it5;
        ++next_ugly;
    }
    return uglys.back();

}

int main() {
    int n;
    while (cin >> n) {
        cout << "the " << n << "th ugly: " << get_ugly(n) << endl;
    }

    return 0;
}
