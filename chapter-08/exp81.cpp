#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::istream;

istream& print(istream &in) {
    char c;
    while (in >> c) {
        cout << c;
    }
    in.clear();
    return in;
}

int main() {
    print(print(cin));
    cout << std::unitbuf;
    cout << endl << " And another turn begins..." << endl;
    cout << endl << "cin.fail() = " << cin.fail() <<endl;
    cout << endl << " It's over. " << endl;
    cout << endl << "cin.rdstate() = " << cin.rdstate() << endl;

    return 0;
}
