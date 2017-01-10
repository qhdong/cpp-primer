#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    unsigned grade;
    while (cin >> grade) {
        string levelgrade;
        if (grade > 100) {
            cout << "Invalid grade." << endl;
            continue;
        } else if (grade < 60) {
            levelgrade = scores[0];
        } else {
            levelgrade = scores[grade / 10 - 5];
            if (grade != 100) {
                if (grade % 10 > 7) {
                    levelgrade += "+";
                } else if (grade % 10 < 3) {
                    levelgrade += "-";
                }
            }
        }

        cout << "Your grade is " << grade
             << " and your levelgrade is " << levelgrade << endl;
    }

    return 0;
}
