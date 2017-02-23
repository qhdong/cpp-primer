#include <iostream>
#include <new>

using namespace std;

int main() {
    auto it = new auto(2);
    cout << *it << endl;
    delete it;

    // const int *pd = new (nothrow) const int(3);
    // cout << *pd << endl;

    // int *p(new int(32));
    // auto q = p;
    // delete p;
    // p = nullptr;
    // delete q;
    //

    auto parr = new int[42]{3, 4};
    delete parr;

    return 0;
}

