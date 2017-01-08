#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ispunct;
using std::getline;

int main() {
    string str;
    while (getline(cin, str)) {
        for (auto &c : str) {
            if (!ispunct(c)) {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}
