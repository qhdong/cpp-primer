#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

template<typename T>
std::ostream& operator<<(std::ostream &s, const std::vector<T> &v) {
    // s.put('[');
    s << '[';
    char comma[3] = {'\0', ' ', '\0'};
    for (const auto &e : v) {
        s << comma << e;
        comma[0] = ',';
    }
    return s << ']';
}

int main() {
    vector<string> words1 {"the", "frought", "is", "also", "cursed"};
    cout << words1 << endl;

    vector<string> words2(words1.begin(), words1.end());
    cout << words2 << endl;

    vector<string> words3(words1);
    cout << words3 << endl;

    vector<string> words4{5, "No"};
    cout << words4 << endl;


    return 0;
}
