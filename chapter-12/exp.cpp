#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

bool b() {
    int *p = new int;
    return p;
}


int main() {
    istream_iterator<int> in_iter(cin), eof;
    ostream_iterator<int> out_iter(cout, ", ");
    vector<int> iv(in_iter, eof);
    // cout << accumulate(in_iter, eof, 0) << endl;
    copy(iv.begin(), iv.end(), out_iter);

    return 0;
}
