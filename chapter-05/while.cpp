#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    do {
        cout << "Please input two string: " << endl;
        string a, b;
        cin >> a >> b;
        cout << (a.size() < b.size() ? a : b) << endl;
    } while (cin);

    return 0;
}
