#include <iostream>
#include <bitset>

using namespace std;

int main() {
    bitset<13> b1(0xbeef);
    bitset<20> b2(0xbeef);
    bitset<128> b3(~0x0ULL);

    bitset<32> b4("1100");

    // string bstr;
    // while (cin >> bstr) {
    //     bitset<8> bv(bstr);
    //     cout << bv << endl;
    // }

    // bitset<8> bb;
    // while (cin >> bb) {
    //     cout << "bitset<8>: " << bb << endl;
    //     cout << "any: " << bb.any() << endl;
    //     cout << "all: " << bb.all() << endl;
    //     cout << "none: " << bb.none() << endl;
    //     cout << "count: " << bb.count() << endl;
    //     cout << "size: " << bb.size() << endl;
    //     cout << "after flip: " << bb.flip() << endl;
    //     cout << "after reset: " << bb.reset() << endl;
    //     cout << "after set: " << bb.set() << endl;

    //     bb[0] = 1;
    //     bb[1].flip();
    //     ~bb[7];
    //     auto l = bb.to_ulong();
    //     cout << "l: " << l << endl;

    // }

    bool status;
    unsigned long quizA = 0;
    quizA |= 1UL << 27;
    status = quizA & (1UL << 27);
    quizA &= ~(1UL << 27);

    bitset<30> quizB;
    quizB.set(27);
    quizB.test(27);
    quizB.reset(27);

    cout << sizeof(quizB) << endl;

    bitset<21> m(1114111U);
    cout << m << endl;
}

