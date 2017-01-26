#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
#include "Person_info.h"

using std::vector;
using std::string;
using std::istringstream;
using std::ostringstream;
using std::istream;
using std::ostream;
using std::ifstream;
using std::ofstream;
using std::cerr;
using std::endl;

vector<PersonInfo> read_person(istream &is) {
    string line, word;
    vector<PersonInfo> people;
    while (getline(is, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }
    return people;
}

bool valid(const string &phone) {
    return phone.size() > 10 && phone.size() < 13;
}

string format(const string &phone) {
    return phone;
}

void write_person(const vector<PersonInfo> &people, ostream &os) {
    for (const auto &entry : people) {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.phones) {
            if (!valid(nums)) {
                badNums << " " << nums;
            } else {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty()) {
            os << entry.name << " "
                << formatted.str() << endl;
        } else {
            cerr << "input error: " << entry.name
                << " invalid number(s) " << badNums.str() << endl;
        }
    }
}


int main(int argc, char **argv) {
    ifstream input(argv[1]);
    ofstream output(argv[2]);
    vector<PersonInfo> people = read_person(input);
    write_person(people, output);
    return 0;
}
