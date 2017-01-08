#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

bool binary_search(vector<int> v, int sought) {
    auto beg = v.cbegin();
    auto end = v.cend();
    auto mid = beg + (end - beg) / 2;

    while (mid != end && *mid != sought) {
        if (*mid <= sought) {
            beg = mid + 1;
        } else {
            end = mid;
        }
        mid = beg + (end - beg) / 2;
    }

    return *mid == sought;
}

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    cout << binary_search(v, 4) << endl;
    cout << binary_search(v, 24) << endl;

    return 0;
}
