#include <string>
#include "query_result.h"

using std::ostream;

ostream& operator<<(ostream &os, const QueryResult &qr) {
    os << qr.sought << " occurs " << qr.lines->size() << " times.\n";

    for (auto n : *qr.lines) {
        os << "\tline(" << n + 1 << "): "
            << *(qr.file->begin() + n) << "\n";
    }

    return os;
}
