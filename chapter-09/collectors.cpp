#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <vector>
#include <list>

using std::array;
using std::deque;
using std::vector;
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {

    list<string> slist;
    vector<string> v = {"hello", "world", "!"};
    slist.insert(slist.begin(), v.end() - 2, v.end());
    slist.insert(slist.end(), {"these", "is", "very", "good"});

    for (auto word : slist) {
        cout << word << " ";
    }
    cout << endl;

    // list<string> lst;
    // auto iter = lst.begin();
    // string word;
    // while (cin >> word) {
    //     iter = lst.insert(iter, word);
    // }

    // for (auto word : lst) {
    //     cout << word << " ";
    // }
    // cout << endl;

    if (!slist.empty()) {
        auto val1 = *slist.begin();
        auto val2 = slist.front();
        auto val3 = *(--slist.end());
        auto val4 = slist.back();
        cout << val1 << " " << val4 << endl;
        auto &f = slist.front();
        auto &b = slist.back();
        f = "Dong";
        b = "Hong";
        cout << slist.front() << " " << slist.back() << endl;
        cout << val1 << " " << val4 << endl;
    }

    return 0;
}
