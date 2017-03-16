#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main() {
    string fnames[] = {"foo.txt", "bar.txt", "test", "a0.txt", "AAA.txt"};
    regex txt_regex("[a-z]+\\.txt");
    for (const auto &f : fnames) {
        cout << f << ": " << regex_match(f, txt_regex) << endl;
    }

    return 0;
}
