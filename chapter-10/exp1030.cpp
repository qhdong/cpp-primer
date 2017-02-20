#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    istream_iterator<int> in(cin), eof;
    vector<int> vec(in, eof);
    sort(vec.begin(), vec.end());
    ostream_iterator<int> out(cout, " ");
    copy(vec.cbegin(), vec.cend(), out);
    cout << endl;

    return 0;
}
