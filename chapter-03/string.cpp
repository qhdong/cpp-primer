#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main() {
    string s1;
    string s2 = "hello";
    string s3("Hello");
    string s4(10, 'y');

    cout << s4 << endl;

    return 0;
}
