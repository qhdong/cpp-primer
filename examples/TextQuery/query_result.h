#ifndef __QUERY_RESULT_H_
#define __QUERY_RESULT_H_

#include <vector>
#include <iostream>
#include <memory>
#include <string>
#include <set>

class QueryResult {
    friend std::ostream& operator<<(std::ostream&, const QueryResult &);
public:
    using line_no = std::vector<std::string>::size_type;
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f) :
        sought(s), lines(p), file(f) {}
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};

std::ostream& operator<<(std::ostream &os, const QueryResult &qr);

#endif // __QUERY_RESULT_H_
