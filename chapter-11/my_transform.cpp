#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>

using namespace std;

const string& transform(const string &s, const map<string, string> &m) {
    auto map_it = m.find(s);
    if (map_it != m.end()) {
        return map_it->second;
    } else {
        return s;
    }
}

map<string, string> build_map(ifstream &rules) {
    map<string, string> trans_map;
    string key, value;
    while (rules >> key && getline(rules, value)) {
        if (value.size() > 1) {
            trans_map[key] = value.substr(1);
        } else {
            throw runtime_error("no value for key " + key);
        }
    }

    return trans_map;
}

void trans_word(ifstream &rules, ifstream &input) {
    auto trans_map = build_map(rules);
    string line;
    while (getline(input, line)) {
        string word;
        istringstream stream(line);
        bool firstword = true;
        while (stream >> word) {
            if (firstword) {
                firstword = false;
            } else {
                cout << " ";
            }
            cout << transform(word, trans_map);
        }
        cout << endl;
    }
}

int main(int argc, char **argv) {
    ifstream rules(argv[1]);
    ifstream input(argv[2]);
    trans_word(rules, input);
    return 0;
}
