#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern);
    smatch results;
    string test_str = "receipt freind  theif receive";
    if (regex_search(test_str, results, r)) {
        cout << results.str() << endl;
    }

    try {
        regex r2("[[:alnum:]+\\.(cc|cpp|cxx)$", regex::icase);
    } catch (regex_error e) {
        cerr << e.what() << "\ncode: " << e.code() << endl;
    }
    // smatch res;
    // string filename;
    // while (cin >> filename) {
    //     if (regex_search(filename, res, r2)) {
    //         cout << res.str() << endl;
    //     }
    // }
}
