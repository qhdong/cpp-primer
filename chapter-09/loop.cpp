#include <iostream>
#include <vector>
#include <list>
#include <forward_list>

using namespace std;

int main() {
    list<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter & 1) {
            iter = vi.insert(iter, *iter++);
            // ++iter;
            ++iter;
        } else {
            iter = vi.erase(iter);
        }
    }

    for (auto i : vi) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2 = {0, 1, 2, 3, 4};
    auto begin = v2.begin();
    while (begin != v2.end()) {
        ++begin;
        begin = v2.insert(begin, 42);
        // v2.insert(begin, 42);
        ++begin;
    }

    for (auto i : v2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v3 = {0, 1, 2, 3, 4, 5};
    auto it = v3.begin();
    while (it != v3.end()) {
        if (*it & 1) {
            it = v3.insert(it, *it);
        }
        ++it;
    }

    for (auto i : v3) {
        cout << i << " ";
    }
    cout << endl;



    return 0;
}

