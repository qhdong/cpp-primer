#include <iostream>
#include "StrBlob.h"

using namespace std;

int main() {
    StrBlob b1;
    {
        StrBlob b2 = {"a", "an", "the"};
        b1 = b2;
        b2.push_back("about");
        cout << b2.size() << endl;
    }
    cout << b1.size() << endl;

    for (auto i : b1) {
        cout << i << endl;
    }

    return 0;
}
