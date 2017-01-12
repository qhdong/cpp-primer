#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int compare(const int &a, const int *b) {
    return a > *b ? a : *b;
}

/**
 * 交换两个指针
 */
void swap(const int *&a, const int *&b) {
    auto tmp = a;
    a = b;
    b = tmp;
}

int main() {
    const int val = 30;
    cout << compare(20, &val) << endl;
    int a = 10, b = 20;
    const int *pa = &a, *pb = &b;
    cout << pa << " " << pb << endl;
    swap(pa, pb);
    cout << pa << " " << pb << endl;
    cout << *pa << " " << *pb << endl;
    return 0;
}

