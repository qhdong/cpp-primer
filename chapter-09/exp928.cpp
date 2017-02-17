#include <iostream>
#include <string>
#include <forward_list>

using std::forward_list;
using std::string;
using std::cout;
using std::endl;

void add(forward_list<string> &flst, const string &s1, const string &s2) {
    if (flst.empty()) return;
    auto curr = flst.begin();
    auto prev = flst.before_begin();
    while (curr != flst.end()) {
        if (*curr == s1) {
            flst.insert_after(curr, s2);
            return;
        } else {
            prev = curr;
            ++curr;
        }
    }
    flst.insert_after(prev, s2);
}

int main() {
    forward_list<string> flst {"Hello", "World", "You", "can", "you", "up"};
    string s1 = "World", s2 = "TugLife!";
    string s3 = "NONONO";
    add(flst, s1, s2);
    add(flst, s3, s2);

    for (auto word : flst) {
        cout << word << " ";
    }
    cout << endl;

    return 0;
}
