#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <list>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::accumulate;
using std::vector;
using std::list;
using std::string;
using std::equal;

int main() {
    vector<const char*> vs{"hello", "world"};
    list<const char*> lc{"hello", "world"};
    cout << equal(vs.cbegin(), vs.cend(), lc.cbegin()) << endl;

    return 0;
}
