#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    cout << "The product of " << v1 << " and " << v2
        << " is " << v1 * v2 << endl;

    return 0;
}
