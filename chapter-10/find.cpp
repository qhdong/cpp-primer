#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int val = 2;
    // vector<int> vi{1, 2, 3, 5, 3, 2};
    int ia[] = {1, 2, 3, 4, 5, 6};
    int *result = find(begin(ia), end(ia), val);
    // auto result = find(vi.cbegin(), vi.cend(), val);
    cout << "The value " << val
        << (result == end(ia) ?
                " is not present" : " is present") << endl;

    return 0;
}
