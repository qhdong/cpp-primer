#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n, key;
    vector<int> vi;
    cout << "input the number you want count: ";
    cin >> key;
    cout << "input the sequence: " << endl;
    while (cin >> n) {
        vi.push_back(n);
    }

    auto result = count(vi.cbegin(), vi.cend(), key);
    cout << "count number: " << key
        << " appears " << result << "times" << endl;


    return 0;
}
