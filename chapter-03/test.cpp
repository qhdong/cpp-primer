#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main() {
    const string s("Keep out!");
    for (auto &c : s) {
        cout << c << endl;
    }

    return 0;
}

