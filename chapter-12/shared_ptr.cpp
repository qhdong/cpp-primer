#include <iostream>
#include <memory>
#include <string>

using namespace std;

shared_ptr<string> factory(const string &s) {
    return make_shared<string>(s);
}

shared_ptr<string> use_factory(const string &s) {
    auto p = factory(s);
    return p;
}

void process(shared_ptr<int> ptr) {
    // TODO
}

int main() {
    shared_ptr<int> p1 = make_shared<int>(42);
    auto p2 = make_shared<string>(10, '9');

    cout << *p2 << endl;

    use_factory("hello");

    // shared_ptr<int> p(new int(42));
    // process(shared_ptr<int>(p.get()));
    // auto p = new int(2);
    // process(shared_ptr<int>(p));
    // cout << *p << endl;

    auto sp = make_shared<int>(33);
    auto p = sp.get();
    delete p;

    cout << *sp << endl;


    return 0;
}
