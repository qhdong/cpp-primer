#include <iostream>
#include <iterator>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::string;

int main(int argc, char **argv) {
    if (argc != 3) {
        cout << "Invalid arguments." << endl
            << "Usage: " << endl
            << argv[0] << " s1 s2" << endl;
        return -1;
    }
    string res = argv[1];
    res += argv[2];
    cout << res << endl;

    return 0;
}

