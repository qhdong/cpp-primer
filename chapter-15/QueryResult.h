#ifndef __QUERY_RESULT_H_
#define __QUERY_RESULT_H_

#include <memory>
#include <string>
#include <vector>
#include <set>
#include <iostream>

class QueryResult {
    friend std::ostream& print(std::ostream&, const QueryResult&);
public:
    using line_no = std::vector<std::string>::size_type;
    using line_it = std::set<line_no>::const_iterator;
    QueryResult(std::string s,
                std::shared_ptr<std::set<line_no>> p,
                std::shared_ptr<std::vector<std::string>> f):
        sought(s), lines(p), file(f) { }

    std::set<line_no>::size_type size() const { return lines->size(); }
    line_it begin() const { return lines->cbegin(); }
    line_it end() const { return lines->cend(); }
    std::shared_ptr<std::vector<std::string>> get_file() { return file; }

private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;

};

std::ostream& print(std::ostream&, const QueryResult&);


#endif
