#include <iostream>
#include "Person.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    Person person("Dong Qihong", "Nanjing, Jiangsu, China");
    // read(cin, person);
    print(cout, person) << endl;

    return 0;
}
