#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

void elimDumps(vector<string> &words) {
    sort(words.begin(), words.end());
    auto dumps_end = unique(words.begin(), words.end());
    words.erase(dumps_end, words.end());
}

void print_vector(const vector<string> &words) {
    for (const auto &w : words) {
        cout << w << " ";
    }
    if (!words.empty()) {
        cout << endl;
    }
}

bool is_shorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> words = {"the", "quick", "red", "fox", "jumps", "over",
        "the", "slow", "red", "turtle"};

    elimDumps(words);
    stable_sort(words.begin(), words.end(), is_shorter);

    print_vector(words);

    return 0;
}
