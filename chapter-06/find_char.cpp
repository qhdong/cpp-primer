#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string::size_type find_char(const string &s, char c,
                            string::size_type &occurs) {
    auto ret = s.size();
    occurs = 0;
    for (decltype(ret) i = 0; i != s.size(); ++i) {
        if (s[i] == c) {
            ++occurs;
            if (ret == s.size()) {
                ret = i;
            }
        }
    }
    return ret;
}

int main() {
    string s = "hello, world!";
    string::size_type occurs = 0;
    auto index = find_char(s, 'l', occurs);
    cout << "index = " << index << ", occurs = " << occurs << endl;

    return 0;
}

