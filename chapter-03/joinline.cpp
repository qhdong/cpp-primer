#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string word;
    unsigned long long count = 0UL;
    while (cin >> word) {
        cout << word << endl;
        ++count;
    }

    cout << "Total words: " << count << endl;

    return 0;
}

