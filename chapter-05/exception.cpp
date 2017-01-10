#include <iostream>
#include <string>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::runtime_error;

int main() {
    char c;
    do {
        cout << "Input two numbers: ";
        try {
            int a, b;
            cin >> a >> b;
            if (b == 0) {
                throw runtime_error("Invalid argument, b shuold not be 0");
            }
            double res = double(a) / double(b);
            cout << endl << a << " / " << b << " = " << res << endl; 
        } catch (runtime_error err) {
            cout << err.what() << endl;
        }
        cout << "Continue ? (y|n): ";
        cin >> c;
    } while (c != 'n' && c != 'N');

    return 0;
}

