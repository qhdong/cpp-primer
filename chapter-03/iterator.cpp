#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::toupper;
using std::isspace;
using std::getline;
using std::vector;

int main() {
    string line;
    vector<string> text;
    while (getline(cin, line)) {
        text.push_back(line);
        for (auto it = line.begin(); it != line.end() && !isspace(*it); ++it) {
            *it = toupper(*it);
        }
        cout << line << endl;
    }

    unsigned count = 0;
    for (auto it = text.cbegin(); it != text.cend(); ++it) {
        if (it->empty()) ++count;
    }
    cout << "empty lines: " << count << endl;

    return 0;
}


