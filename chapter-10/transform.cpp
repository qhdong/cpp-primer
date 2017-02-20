#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v = {1, -1, 2, 3, 5, -2, -3};
    // v.reserve(20);
    // fill_n(v.begin(), 20, -1);

    for_each(v.begin(), v.end(),
            [](const int &i) { cout << i << " "; });
    cout << endl;

    transform(v.begin(), v.end(), v.begin(),
            [](int i) -> int { return i < 0 ? -i : i; });

    for_each(v.begin(), v.end(),
            [](const int &i) { cout << i << " "; });
    cout << endl;


    return 0;
}

