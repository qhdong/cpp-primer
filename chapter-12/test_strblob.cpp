#include <iostream>
#include <fstream>
#include <string>
#include "StrBlob.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " [file]" << endl;
        return -1;
    }

    ifstream in(argv[1]);
    string line;
    StrBlob blob;
    while (getline(in, line)) {
        blob.push_back(line);
    }

    for (auto beg = blob.begin(), end = blob.end(); neq(beg, end); beg.incr()) {
        cout << beg.deref() << endl;
    }

    return 0;
}
