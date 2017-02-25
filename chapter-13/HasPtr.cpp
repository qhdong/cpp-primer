#include <iostream>
#include <string>

using namespace std;

class HasPtr {
public:
    HasPtr(const string &s = string()):
        ps(new string(s)), i(0) {}

    HasPtr(const HasPtr &o):
        ps(new string(*o.ps)), i(o.i) {}

    HasPtr& operator=(const HasPtr &rhs) {
        auto newp = new string(*rhs.ps);
        delete ps;
        ps = newp;
        i = rhs.i;
        return *this;
    }

    ~HasPtr() { delete ps; }

    string* get_ps() {
        return ps;
    }
private:
    string *ps;
    int i;
};

int main() {
    HasPtr p1("p1");
    HasPtr p2 = p1;
    cout << *p1.get_ps() << endl;
    {
        HasPtr p3 = p1;
    }

    cout << *p1.get_ps() << endl;
    cout << *p2.get_ps() << endl;
}

