#include <iostream>
#include <string>
#include <iterator>
#include <algorithm>
#include <functional>

using std::istream_iterator;
using std::vector;
using std::string;
using std::accumulate;
using std::next;
using std::to_string;
using std::multiplies;
using std::cout;
using std::endl;
using std::cin;

int main() {
    istream_iterator<int> in_iter(cin), eof;

    vector<int> vec(in_iter, eof);

    auto sum = accumulate(vec.begin(), vec.end(), 0);
    auto product = accumulate(vec.begin(), vec.end(), 1, multiplies<int>());
    string s = accumulate(next(vec.begin()), vec.end(), to_string(vec[0]),
                            [](string &a, const int b) {
                            return a + "-" + to_string(b);
                            });
    cout << "sum: " << sum << endl;
    cout << "product: " << product << endl;
    cout << "string: " << s << endl;

    return 0;
}
