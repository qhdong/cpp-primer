#include <iostream>

using std::cin;
using std::cout;
using std::endl;

unsigned count_calls() {
    static int ret = 0;
    return ret++;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        cout << count_calls() << endl;
    }
    return 0;
}

