#include <iostream>
#include <string>

using namespace std;

int main() {
    const char *cp = "Hello, world!!!";
    char notNull[] = {'H', 'l'};

    string s1(cp);
    string s2(notNull, 2);
    // string s3(notNull);
    string s4(cp + 6, 5);
    string s5(s1, 6, 5);
    string s6(s1, 6);
    string s7(s1, 6, 20);
    // string s8(s1, 16);

    s1.replace(0, 3, "HEL");
    cout << s1 << endl;

    s1.append(", YES");
    cout << s1 << endl;

    s1.insert(s1.begin(), s2.begin(), s2.end());
    cout << s1 << endl;

    double d = stod("3.334sld");
    cout << d << endl;

    return 0;
}
