#include <iostream>
#include <vector>
#include <new>

using namespace std;

vector<int>* get_vector() {
    return new (nothrow) vector<int>;
}

void fill_vector(vector<int> *v) {
    int n;
    while (cin >> n) {
        v->push_back(n);
    }
}

void print_vector(const vector<int> *v) {
    for (auto n : *v) {
        cout << n << " ";
    }
    cout << endl;
}


int main() {
    auto v = get_vector();
    fill_vector(v);
    print_vector(v);
    delete v;

    return 0;
}
