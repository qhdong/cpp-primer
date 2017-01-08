#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    const string hexdigits = "0123456789ABCDEF";
    string res;
    string::size_type n = 0;
    while (cin >> n) {
        if (n >= 0 && n <= 15) {
            res += hexdigits[n];
        }
    }
    cout << "Hex digits: " << res << endl;

    return 0;
}
