#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string s1 = "The      string   with        too many    balanks   ";
    string s2;
    unique_copy(s1.cbegin(), s1.cend(), back_inserter(s2));
    // for_each(lst_unique.cbegin(), lst_unique.cend(),
        // [](int x) { cout << x << " "; });
    // cout << endl;
    cout << s2 << endl;


    return 0;
}
