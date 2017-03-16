#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int main() {
    vector<const char*> cats = {"hello", "world", "yes", "baby"};
    sort(cats.begin(), cats.end(), [](const char *lhs, const char *rhs) {
            return strcmp(lhs, rhs) < 0; });

    for (auto c : cats) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
