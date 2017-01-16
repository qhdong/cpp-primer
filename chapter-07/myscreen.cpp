#include <iostream>
#include "Screen.h"

using std::cout;
using std::endl;

int main() {
    Screen myScreen(5, 5, 'x');
    myScreen.move(4, 0).set('#').display(cout);
    cout << endl;
    myScreen.display(cout);
    cout << endl;

    return 0;
}

