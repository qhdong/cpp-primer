#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

map<string, string> build_map(ifstream &map_file) {
    map<string, string> trans_map;
    string key;
    string value;
    while (map_file >> key && getline(map_file, value)) {
        if (value.size() > 1) {
            trans_map[key] = value.substr(1);
        } else {
            throw runtime_error("no rule for " + key);
        }
    }

    return trans_map;
}

const string& transform(const string &s, const map<string, string> &m) {
    auto map_it = m.find(s);
    if (map_it != m.cend()) {
        return map_it->second;
    } else {
        return s;
    }
}

void word_transform(ifstream &map_file, ifstream &input) {
    auto trans_map = build_map(map_file);
    string text;
    while (getline(input, text)) {
        istringstream stream(text);
        bool firstword = true;
        string word;
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
    if (argc != 3) {
        cerr << "Usage: ./transform [map_file] [input_file]" << endl;
        return -1;
    }

    ifstream map_file(argv[1]);
    ifstream input_file(argv[2]);
    
    word_transform(map_file, input_file);

    return 0;

}
