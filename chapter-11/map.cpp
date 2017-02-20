#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main() {
    map<string, vector<pair<string, string>>> family = {
        {"Dong",{{"Qihong", "1993/3/20"},
                {"Fayong", "1966/5/1"},
                {"Huichun", "19xx"}}},
        {"Hai", {{"Shengxiang", "1968/9/1"},
                    {"Shenghua", "1970/2/3"},
                    {"Shengqi", "19XX"}}}
    };

    for (const auto &f : family) {
        cout << f.first << endl << "    ";
        for (const auto &p : f.second) {
            cout << p.first << ": " << p.second << " ";
        }
        cout << endl;
    }

    return 0;
}
