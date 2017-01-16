#include <iostream>
#include <string>
#include "Sales_data.h"

using std::cout;
using std::endl;
using std::string;

int main() {
    string s("202-x-231");
    Sales_data i;
    print(cout, i);

    i.combine(s);
    print(cout, i);

    return 0;
}
