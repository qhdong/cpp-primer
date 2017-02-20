#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>

using namespace std;
using namespace::placeholders;

bool is_shorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main() {
    vector<string> v = {"hello", "world", "Yes", "I", "Like", "It"};
    sort(v.begin(), v.end());
    for_each(v.begin(), v.end(), [](const string &s) {cout << s << " "; });
    cout << endl;

    sort(v.begin(), v.end(), is_shorter);
    for_each(v.begin(), v.end(), [](const string &s) {cout << s << " "; });
    cout << endl;

    sort(v.begin(), v.end(), bind(is_shorter, _2, _1));
    for_each(v.begin(), v.end(), [](const string &s) {cout << s << " "; });
    cout << endl;

    return 0;
}
