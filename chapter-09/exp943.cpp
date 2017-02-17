#include <iostream>
#include <string>

using namespace std;

void replace(string &s, const string &oldVal, const string &newVal) {
    auto it = s.begin();
    while (it != s.end()) {
        auto ito = oldVal.begin();
        auto its = it;
        while (its != oldVal.end() && *ito == *its) {
            ++ito;
            ++its;
        }
        // find it
        if (ito == oldVal.end()) {
            it = s.erase(it, its);
            it = s.insert(it, newVal.begin(), newVal.end());
            it += newVal.size();
        } else { // didn't find it, continue
            ++it;
        }
    }
}

int main() {
    string s("I will go thru the subway and then go tho the highway");
    string oldVal = "tho";
    string newVal = "through";
    replace(s, oldVal, newVal);
    replace(s, "thru", newVal);
    cout << s << endl;

    return 0;
}
