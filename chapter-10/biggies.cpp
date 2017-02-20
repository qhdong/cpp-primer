#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void elimDumps(vector<string> &words) {
    sort(words.begin(), words.end());
    auto dumps_end = unique(words.begin(), words.end());
    words.erase(dumps_end, words.end());
}

string make_plural(size_t count, const string &word, const string &ending) {
    return count > 1 ? word + ending : word;
}

void biggies(vector<string> &words,
        vector<string>::size_type sz,
        ostream &os = cout, char c = ' ') {
    elimDumps(words);
    stable_sort(words.begin(), words.end(),
            [](const string &s1, const string &s2) {
            return s1.size() < s2.size();
            });
    auto wc = stable_partition(words.begin(), words.end(),
            [sz](const string &s) {
            return s.size() >= sz;
            });

    // auto n = words.end() - wc;
    auto n = wc - words.begin();
    os << n << " " << make_plural(n, "word", "s")
        << " of length " << sz << " or longer" << endl;
    os << words.size() << " " << make_plural(words.size(), "word", "s")
        << " in total, and the longest word length is "
        << (*(words.cend()-1)).size() << endl;

    for_each(words.begin(), wc,
            [=, &os](const string &s) { os << s << c;});
    os << endl;

}


int main(int argc, char **argv) {
    if (argc != 3) {
        cerr << "Usage: ./biggies [count] [file]" << endl;
        return -1;
    }

    size_t sz = stoi(argv[1]);
    ifstream input(argv[2]);
    vector<string> book;
    string word;
    while (input >> word) {
        book.push_back(word);
    }

    biggies(book, sz);

    return 0;
}
