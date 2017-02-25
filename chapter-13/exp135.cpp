#include <iostream>
#include <string>

using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()):
        ps(new string(s)), i(0) {}
    HasPtr(const HasPtr &oring):
        ps(new string(*oring.ps)), i(oring.i) {}
    ~HasPtr() {delete ps;}
private:
    string *ps;
    int i;
};

int main() {
    HasPtr a("hello");
    HasPtr b(a);
    HasPtr c = a;

    return 0;
}
