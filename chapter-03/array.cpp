#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main() {
    const char a[6] = "hello";
    cout << a << endl;
    int A[10] = {1, 2, 3, 4};

    int *ptrs[10]; // array of pointers
    int (*parray)[10]; // pointer to int array of 10
    int (&ref_arr)[10] = A; // reference to int array of 10
    int *(&array)[10] = ptrs; // array is the reference to array of 10 of pointers

    int *pbeg = begin(A);
    int *pend = end(A);
    while (pbeg != pend) {
        cout << *pbeg++ << " ";
    }
    cout << endl;

    return 0;
}
