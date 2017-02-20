#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> lst1 = {1, 2, 3, 4};
    list<int> lst2, lst3;
    copy(lst1.cbegin(), lst1.cend(), front_inserter(lst2));
    for_each(lst2.cbegin(), lst2.cend(),
            [](int x) { cout << x << " "; });
    cout << endl;

    copy(lst1.cbegin(), lst1.cend(), inserter(lst3, lst3.begin()));
    for_each(lst3.cbegin(), lst3.cend(),
            [](int x) { cout << x << " "; });
    cout << endl;
    return 0;
}
