#include <string>
using std::string;

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cin; 
using std::cout;
using std::cerr;
using std::endl;

#include <cstdlib>

#include "TextQuery.h"
#include "QueryResult.h"

void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        cout << "enter word to look for, or q to quit: ";
        string s;
        if (!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}

int main(int argc, char **argv) {
    ifstream infile;
    if (argc < 2 || !(infile.open(argv[1]), infile)) {
        cerr << "No input file!" << endl;
        return EXIT_FAILURE;
    }
    runQueries(infile);
    return 0;
}
