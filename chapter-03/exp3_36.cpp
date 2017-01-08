#include <iostream>
#include <iterator>
#include <vector>

using std::cout;
using std::endl;
using std::begin;
using std::end;
using std::vector;

bool is_vector_equal(vector<int> &a, vector<int> &b) {
    if (a.size() != b.size()) return false;
    for (auto ita = a.cbegin(), itb = b.cbegin();
            ita != a.cend(); ++ita, ++itb) {
        if (*ita != *itb) {
            return false;
        }
    }
    return true;
}



int main() {
    const char a[6] = "hello";
    cout << a << endl;
    // int A[10] = {1, 2, 3, 4};
    // int B[10] = {2, 2, 3, 4};
    //
    vector<int> va{1, 2, 3};
    vector<int> vb{1, 2, 3};

    cout << is_vector_equal(va, vb) << endl;

    // int *ptrs[10]; // array of pointers
    // int (*parray)[10]; // pointer to int array of 10
    // int (&ref_arr)[10] = A; // reference to int array of 10
    // int *(&array)[10] = ptrs; // array is the reference to array of 10 of pointers

    // int *pbeg = begin(A);
    // int *pend = end(A);
    // while (pbeg != pend) {
    //     cout << *pbeg++ << " ";
    // }
    // cout << endl;

    // cout << isEqual(A, B) << endl;

    return 0;
}
