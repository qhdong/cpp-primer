#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    ostream_iterator<int> out(cout, " ");
    vector<int> v = {1, 2, 3, 4, 5};
    sort(v.rbegin(), v.rend());
    copy(v.crbegin(), v.crend(), out);
    cout << endl;
    return 0;
}
