#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<string, string> authors = {
        {"Stanley", "The C++ Primer"},
        {"Stanley", "The C++ Programing Language"},
        {"Stanley", "Effective C++"},
        {"Steve McConnell", "Code Complete"},
        {"Steve McConnell", "Code Complete II"}
    };

    string search_item("Stanley");

    for (const auto & e : authors) {
        cout << e.first << " - " << e.second << endl;
    }

    // delete search_item
    // auto del_count = authors.erase(search_item);
    // cout << "deleted " << del_count << " items" << endl;

    // auto entries = authors.count(search_item);
    // auto iter = authors.find(search_item);
    // while (entries--) {
    //     cout << iter->second << endl;
    //     ++iter;
    // }

    // for (auto beg = authors.lower_bound(search_item),
    //         end = authors.upper_bound(search_item); beg != end; ++beg) {
    //     cout << beg->second << endl;
    // }

    // for (auto pos = authors.equal_range(search_item); pos.first != pos.second;
    //         ++pos.first) {
    //     cout << pos.first->second << endl;
    // }

    return 0;
}
