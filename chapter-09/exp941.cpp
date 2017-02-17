#include <iostream>
#include <vector>
#include <vector>

using namespace std;

string vec2str(const vector<char> &vc) {
    char *ch = new char[vc.size() + 1];
    for (decltype(vc.size()) i = 0; i < vc.size(); ++i) {
        ch[i] = vc[i];
    }
    ch[vc.size()] = '\0';
    return string(ch);
}

int main() {
    vector<char> vc{'a', 'p', 'p', 'l', 'e'};
    cout << vec2str(vc) << endl;

    return 0;
}

