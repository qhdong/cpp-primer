#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

string upper(string word) {
    string s;
    for (auto c : word) {
        if (c >= 'a' && c <= 'z') {
            s += c - 32;
        } else {
            s += c;
        }
    }
    return s;
}

int main() {
    vector<string> words;
    string w;
    while (cin >> w) {
        words.push_back(w);
    }

    vector<string> upper_words;
    for (auto word : words) {
        upper_words.push_back(upper(word));
    }

    for (auto word : upper_words) {
        cout << word << endl;
    }

    return 0;
}
