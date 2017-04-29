#include <iostream>
#include <fstream>
#include <string>

#include "text_query.h"
#include "query_result.h"

using std::cout;
using std::cin;
using std::cerr;
using std::string;
using std::ifstream;

void run_queries(ifstream &infile) {
    TextQuery tq(infile);
    string word;
    while (true) {
        cout << "please input the word to query, or q to quit: ";
        if (!(cin >> word) || word == "q") break;
        cout << tq.query(word);
    }
}

int main(int argc, char **argv) {
    ifstream infile;
    if (argc != 2 || !(infile.open(argv[1]), infile)) {
        cerr << "no input file\n";
        return -1;
    }

    run_queries(infile);

    return 0;
}
