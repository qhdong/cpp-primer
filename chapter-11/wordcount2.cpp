#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
    map<string, size_t> word_count;
    set<string> exclude = {"The", "But", "And", "Or", "An", "A",
        "the", "but", "and", "or", "an", "a", "you", "I"};

    string word;
    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) {
            ++word_count.insert({word, 0}).first->second;
        }
    }

    for (const auto &w : word_count) {
        cout << w.first << " occurs: " << w.second
            << (w.second > 1 ? " times" : " time") << endl;
    }

    return 0;
}

