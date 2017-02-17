#include <iostream>
#include <array>
#include <string>
#include <deque>
#include <vector>
#include <list>
#include <forward_list>

using std::array;
using std::deque;
using std::vector;
using std::list;
using std::forward_list;
using std::string;
using std::cout;
using std::cin;
using std::endl;

int main() {
    forward_list<int> flst = { 1, 3, 5, 7, 9};
    auto prev = flst.before_begin();
    auto curr = flst.begin();
    while (curr != flst.end()) {
        if (*curr & 1) {
            curr = flst.erase_after(prev);
        } else {
            prev = curr;
            ++curr;
        }
    }

    for (auto i : flst) {
        cout << i << " ";
    }
    cout << endl;

   return 0;
}
