#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    int a[]{1, 2, 3};
    int *p = a;
    vector<int> ivec(10, 3);

    cout << "sizeof(char) = " << sizeof(char) << endl;
    cout << "sizeof(short) = " << sizeof(short)<< endl;
    cout << "sizeof(int) = " << sizeof(int) << endl;
    cout << "sizeof(long) = " << sizeof (long) << endl;
    cout << "sizeof(long long) = " << sizeof (long long) << endl;
    cout << "sizeof(float) = " << sizeof (float) << endl;
    cout << "sizeof(double) = " << sizeof (double) << endl;
    cout << "sizeof(long double) = " << sizeof (long double) << endl;
    cout << "sizeof(a) = " << sizeof (a) << endl;
    cout << "sizeof(p) = " << sizeof (p) << endl;
    cout << "sizeof(*p) = " << sizeof (*p) << endl;
    cout << "sizeof(ivec) = " << sizeof (ivec) << endl;

    constexpr size_t sz = sizeof(a) / sizeof(*a);
    int b[sz];

    int x[10];
    int *px = x;
    cout << sizeof(x) / sizeof(*x) <<endl;  // 10
    cout << sizeof(px) / sizeof(*px) <<endl; // 2


    return 0;
}

