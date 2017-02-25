#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

int main() {
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8};
    // cout << count_if(vi.begin(), vi.end(), greater<int>(5)) << endl;
    sort(vi.begin(), vi.end(), greater<int>());
    ostream_iterator<int> out(cout, " ");
    copy(vi.begin(), vi.end(), out);
    cout << endl;

    return 0;
}
