#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string line;
    unsigned long long count = 0UL;
    while (std::getline(cin, line)) {
        cout << line << endl;
        ++count;
    }

    cout << "Total line: " << count << endl;

    return 0;
}

