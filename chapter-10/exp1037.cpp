#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lst;
    copy(v.crbegin() + 2, v.crbegin() + 7, back_inserter(lst));

    ostream_iterator<int> out(cout, " ");
    copy(lst.begin(), lst.end(), out);
    cout << endl;

    return 0;
}
