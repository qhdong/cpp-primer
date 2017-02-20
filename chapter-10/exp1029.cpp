#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "Usage: ./exp1029 [filename]" << endl;
        return -1;
    }

    ifstream in(argv[1]);
    istream_iterator<string> word_in(in), eof;
    vector<string> words(word_in, eof);
    ostream_iterator<string> out(cout, " ");
    copy(words.cbegin(), words.cend(), out);
    cout << endl;

    return 0;
}
