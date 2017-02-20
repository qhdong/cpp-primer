#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
    list<int> v = {0, 2, 1, 0, 2};

    auto pos = find(v.crbegin(), v.crend(), 0);
    cout << *pos << endl;

    return 0;
}
