#include "TextQuery.h"
#include "make_plural.h"

#include <cstddef>
#include <iostream>
#include <memory>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>

using std::ifstream;
using std::vector;
using std::string;
using std::getline;
using std::istringstream;
using std::set;
using std::ispunct;
using std::tolower;
using std::shared_ptr;
using std::ostream;
using std::endl;

TextQuery::TextQuery(ifstream &is): file(new vector<string>) {
    string text;
    while (getline(is, text)) {
        file->push_back(text);
        line_no n = file->size() - 1;
        istringstream line(text);
        string word;
        while (line >> word) {
            word = cleanup_str(word);
            auto &lines = wm[word];
            if (!lines) {
                lines.reset(new set<line_no>);
            }
            lines->insert(n);
        }
    }
}

string TextQuery::cleanup_str(const string &word) {
    string ret;
    for (auto it = word.begin(); it != word.end(); ++it) {
        if (!ispunct(*it)) {
            ret += tolower(*it);
        }
    }
    return ret;
}

QueryResult TextQuery::query(const string &sought) const {
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(cleanup_str(sought));
    if (loc == wm.end()) {
        return QueryResult(sought, nodata, file);
    } else {
        return QueryResult(sought, loc->second, file);
    }
}

ostream &print(ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " "
        << make_plural(qr.lines->size(), "time", "s") << endl;
    
    for (auto num : *qr.lines) {
        os << "\t(line " << num + 1 << ") "
            << *(qr.file->begin() + num) << endl;
    }

    return os;
}
