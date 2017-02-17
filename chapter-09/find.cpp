#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void print_ruler(const string &s) {
    for (decltype(s.size()) i = 0; i != s.size(); ++i) {
        cout << setw(3) << i;
    }
    cout << endl;
    for (decltype(s.size()) i = 0; i != s.size(); ++i) {
        cout << setw(3) << s[i];
    }
    cout << endl;
}


int main() {
    string name("ab2c3d7R4E6");
    string numbers("0123456789");

    print_ruler(name);

    string::size_type pos = 0;
    while ((pos = name.find_first_not_of(numbers, pos)) != string::npos) {
        cout << "name[" << pos << "] = " << name[pos] << endl;
        ++pos;
    }

    
    return 0;
}
