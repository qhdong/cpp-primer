#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::ifstream;
using std::vector;
using std::string;
using std::getline;
using std::cout;
using std::endl;

vector<string> read(const string &filename) {
    vector<string> ret;
    ifstream file(filename);
    string s;
    while (getline(file, s)) {
        ret.push_back(s);
    }
    return ret;
}

int main(int argc, char **argv) {
    string filename = "/etc/protocols";
    if (argc == 2) {
        filename = argv[1];
    }
    vector<string> v = read(filename);
    for (auto line : v) {
        cout << line << endl;
    }

    return 0;
}
