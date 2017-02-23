#include <iostream>
#include <memory>

using namespace std;

typedef unique_ptr<int> IntP;

IntP getptr() {
    IntP up3(new int(2));
    return up3;
}


int main() {
    IntP up(new int(42));
    // IntP up2 = up;
    // IntP up2(up);
    IntP up2(up.release());
    IntP up3;
    up3.reset(up2.release());

    cout << *getptr() << endl;

    unique_ptr<int[]> up_arr(new int[42]);
    for (size_t i = 0; i != 42; ++i) {
        up_arr[i] = i;
    }

    shared_ptr<int> sp(new int[42], [](int *p) { delete[] p; });
    for (size_t i = 0; i != 42; ++i) {
        *(sp.get() + i) = i;
    }


    return 0;
}

