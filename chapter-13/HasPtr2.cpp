#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class HasPtr {
    friend void swap(HasPtr &lhs, HasPtr &rhs);
public:
    HasPtr(const string &s = string()):
        ps(new string(s)), use(new size_t(1)), i(ps->size()) {}
    
    HasPtr(const HasPtr&);
    // HasPtr& operator=(const HasPtr &rhs);
    HasPtr& operator=(HasPtr rhs);
    ~HasPtr();

    bool operator<(const HasPtr &rhs) {
        return i < rhs.i;
    }

private:
    string *ps;
    size_t *use;
    int i;
};

inline void swap(HasPtr &lhs, HasPtr &rhs) {
    cout << "swap(" << *lhs.ps << ", " << *rhs.ps << ")" << endl;
    using std::swap;
    swap(lhs.ps, rhs.ps);
    swap(lhs.use, rhs.use);
    swap(lhs.i, rhs.i);
}

HasPtr::HasPtr(const HasPtr &o): ps(o.ps), use(o.use), i(o.i) {
    ++*use;
    cout << "copy constructor, \"" << *ps << "\" use count: " << *use << endl;
}


HasPtr& HasPtr::operator=(HasPtr rhs) {
    swap(*this, rhs);
    return *this;
}

// HasPtr& HasPtr::operator=(const HasPtr &rhs) {
//     ++*rhs.use;
//     if (--*use == 0) {
//         cout << "rhs deleting \"" << *ps << "\" OK" << endl;
//         delete ps;
//         delete use;
//     }
//     ps = rhs.ps;
//     use = rhs.use;
//     i = rhs.i;
//     return *this;
// }

HasPtr::~HasPtr() {
    --*use;
    cout << "deleting \"" << *ps << "\", use count: " << *use;

    if (*use == 0) {
        delete ps;
        delete use;
        cout << " OK." << endl;
    } else {
        cout << " Fail." << endl;
    }
}

int main() {
    HasPtr a("a");
    HasPtr b("b");
    {
        HasPtr c("c");
        b = c;
    }
    b = a;


    vector<HasPtr> vec;
    vec.emplace_back("Hello");
    vec.emplace_back("world");
    vec.emplace_back("tom");
    vec.emplace_back("s");

    cout << "sorting ====================" << endl;

    sort(vec.begin(), vec.end());

    cout << "sorting complete ==============="  << endl;

    return 0;
}
