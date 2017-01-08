#include <iostream>
#include <string>
#include <cctype>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s("Hello world!!!");
    string::size_type punct_cnt = 0;
    for (char c : s) {
        if (ispunct(c)) {
            ++punct_cnt;
        }
    }
    cout << punct_cnt
         << " punctuation characters in " << s << endl;

    return 0;
}
