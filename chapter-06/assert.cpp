#include <iostream>
#include <string>
#include <vector>
#include <cassert>

#define NDEBUG

using std::cout;
using std::cerr;
using std::cin;
using std::endl;
using std::string;
using std::vector;

template <class T>
void print_vec(vector<T> &v, size_t i = 0) {
#ifndef NDEBUG
    cout << " in file " << __FILE__ << " at line " << __LINE__ << endl
        << "    Compiled on " << __DATE__
        << " at " << __TIME__ << endl
        << __func__ << "(v, " << i << ")" << endl;
#endif
    if (i != v.size()) {
        cout << v[i] << " ";
        print_vec(v, ++i);
    } else {
        cout << endl;
    }
}

int main() {
    // string s;
    // while (cin >> s && s != "yes") ;  // empty loops
    // assert(cin);

    vector<int> v{1, 2, 3};
    print_vec(v);

    return 0;
}

