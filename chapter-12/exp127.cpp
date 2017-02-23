#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> get_vector() {
    return make_shared<vector<int>>();
}

void fill_vector(const shared_ptr<vector<int>> &pv) {
    int n;
    while (cin >> n) {
        pv->push_back(n);
    }
}

void print_vector(const shared_ptr<vector<int>> &pv) {
    for (auto n : *pv) {
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    auto pv = get_vector();
    fill_vector(pv);
    print_vector(pv);

    return 0;
}

