#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

using namespace std;

void wordcount(istream &input) {
    unordered_map<string, size_t> word_count;
    string word;
    while (input >> word) {
        ++word_count[word];
    }

    for (const auto &w : word_count) {
        cout << w.second << " - " << w.first << endl;
    }
}

int main(int argc, char **argv) {
    if (argc <= 1) {
        wordcount(cin);
    } else {
        ifstream input;
        for (int i = 1; i < argc; ++i) {
            cout << "word count for [" << argv[i] << "]" << endl;
            input.open(argv[i]);
            wordcount(input);
            input.close();
        }
    }

    return 0;
}
