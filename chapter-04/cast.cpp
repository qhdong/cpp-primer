#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


int main() {
    // const char *cp = "hello";
    // char *q = const_cast<char*>(cp);
    // cout << static_cast<string>(q) << endl;

    // // q[0] = 'c';

    // cout << q << endl;

    // int ival = 10;
    // int *ip = &ival;
    // char *pc = reinterpret_cast<char*>(ip);
    // string str(pc);
    // cout << str << endl;

    // int i = 20;
    // double d = 3.3;
    // cout << (i *= static_cast<int>(d)) << endl;

    int i; double d; const string *ps; char *pc; void *pv;
    pv = static_cast<void*>(ps);
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);
    pc = static_cast<char*>(pv);


    return 0;
}
