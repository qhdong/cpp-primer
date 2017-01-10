#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

bool is_prefix(vector<int> &v1, vector<int> &v2) {
    if (v1.size() > v2.size()) {
        return is_prefix(v2, v1);
    }

    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) return false;
    }

    return true;
}

int main() {
    vector<int> a = {0, 1, 1, 2};
    vector<int> b = {0, 2, 1, 2, 3, 5, 9};

    cout << is_prefix(b, a) << endl;

    return 0;
}
