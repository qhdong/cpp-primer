#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::string;

int main() {
    string repeat_word;
    unsigned repeat_count = 0;

    string word;
    if (cin >> word) {
        unsigned count = 1;
        string cur;
        while (cin >> cur) {
            if (cur == word) {
                ++count;
            } else {
                if (count > repeat_count) {
                    repeat_count = count;
                    repeat_word = word;
                }
                word = cur;
                count = 1;
            }
        }

        if (count > repeat_count) {
            repeat_count = count;
            repeat_word = word;
        }
    }

    if (repeat_count > 1) {
        cout << "\"" << repeat_word
            << "\" has repeated " << repeat_count << " times" << endl;
    } else {
        cout << "no repeat." << endl;
    }

    return 0;
}
