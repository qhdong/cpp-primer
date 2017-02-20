#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    istream_iterator<int> in(cin), eof;
    ostream_iterator<int> out(cout, "\n");
    copy(in, eof, out);

    cout << endl;
    return 0;
}
