#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz) {
    return s.size() >= sz;
}

int main() {
    vector<int> v = {1, 2, 3, 10, 9, 4, 5, -2, 0};
    sort(v.begin(), v.end(), greater<int>());
    string s("hello");
    auto res = find_if(v.begin(), v.end(), bind(check_size, ref(s), _1));
    
    cout << *res << endl;

    return 0;
}


