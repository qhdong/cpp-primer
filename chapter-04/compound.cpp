#include <iostream>
#include <iterator>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::vector;
using std::string;


int main() {
    int a[]{1, 2, 3};
    auto it = begin(a);
    cout << ++*it << " " << a[0] << a[1] << a[2] << endl;
    cout << *it++ << " " << a[0] << a[1] << a[2] << endl;
    cout << *++it << " " << a[0] << a[1] << a[2] << endl;

    cout << 12/3*4+5*15+24%4/2<<endl;
    cout << -30 * 3 + 21 / 5 << endl;
    cout << -30 + 3 * 21 / 5 << endl;
    cout << 30 / 3 * 21 % 5 << endl;
    cout << -30 / 3 * 21 % 4 << endl;

    int val = 3;
    // if (val == true) {
    if (val) {
        cout << "val is true" << endl;
    }

    // while (cin >> val && val != 42) {
    //     cout << val << endl;
    // }
    //
    // int k{3.3};
    // int k2 = {3.3};
    int k3 = 3.3;

    vector<string> vstr{"hello", "", "I", "feels", "good"};
    auto iter = vstr.begin();
    cout << "*iter++ = " << *iter++ << endl; // hello
    // cout << "(*iter)++ = " << (*iter)++ << endl; // orld
    // cout << "*iter.empty = " << *iter.empty() << endl; // orld
    cout << "iter->empty() = " << iter->empty() << endl; // false
    // cout << "++*iter " << ++*iter << endl; // false
    cout << "iter++->empty() " << iter++->empty() << endl; // false
    cout << *iter << endl;

    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8};
    for (auto &i : ivec) {
        i = i & 1 ? 2 * i : i;
        cout << i << " ";
    }
    cout << endl;

    int grade;
    while (cin >> grade) {
        string finalgrade = (grade >= 90)
            ? "high pass"
            : (grade > 75) ? "pass"
                           : (grade >= 60) ? "low pass"
                                          : "fail";
        cout << "your score is: " << grade
            << " and your finalgrade is " << finalgrade << endl;
    }

    unsigned long ul1 = 3, ul2 = 7;
    cout << (ul1 & ul2) << (ul1 | ul2) << (ul1 && ul2) << (ul1 || ul2) << endl;

    return 0;
}
