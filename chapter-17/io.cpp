#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << boolalpha << true << " " << false << endl;

    cout << showbase;
    cout << hex << 1024 << endl;
    cout << oct << 1024 << endl;
    cout << dec << 1024 << endl;
    cout << noshowbase;

    cout << sqrt(2) << endl;
    cout << setprecision(8) << sqrt(2) << endl;
    cout << scientific << sqrt(2) << endl;
    cout << defaultfloat;

    cout << showpoint << 10.0 << endl;

    int i = -16;
    double d = 3.14159;

    cout << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << left
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << right
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << internal
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << setfill('#')
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';

    cout << setfill('_')
         << setbase(10) << 0xbeef << endl;

    char c;
    cin >> noskipws;
    while (cin >> c) {
        cout << c;
    }
    cin >> skipws;
    return 0;
}
