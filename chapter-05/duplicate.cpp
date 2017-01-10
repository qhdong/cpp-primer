#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    string dup;
    bool flag = false;
    if (cin >> dup) {
        string cur;
        while (cin >> cur) {
            if (cur == dup) {
                if (dup.empty() || dup[0] < 'A' || dup[0] > 'Z') continue;
                flag = true;
                break;
            }
            dup = cur;
        }
    }
    if (flag) {
        cout << "\"" << dup << "\" duplicates" << endl;
    } else {
        cout << "no duplicates" << endl;
    }
    return 0;
}
