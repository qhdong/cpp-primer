#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string line = "FIRST,MIDDLE,LAST";
    auto comma = find(line.cbegin(), line.cend(), ',');
    cout << string(line.cbegin(), comma) << endl;

    auto last = find(line.crbegin(), line.crend(), ',');
    cout << string(last.base(), line.cend()) << endl;

    return 0;
}
