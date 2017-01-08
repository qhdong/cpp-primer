#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string str;
    string sum;
    while (cin >> str) {
        if (sum.empty()) {
            sum += str;
        } else {
            sum = sum + " " + str;
        }
    }
    cout << sum << endl;

    return 0;
}

