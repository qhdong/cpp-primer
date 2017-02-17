#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <vector>
#include <list>

using std::array;
using std::deque;
using std::vector;
using std::list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin();
    while (iter != lst.end()) {
        if (*iter & 1) {
            iter = lst.erase(iter);
        } else {
            ++iter;
        }
    }

    for (auto i : lst) {
        cout << i << " ";
    }
    cout << endl;

   return 0;
}
