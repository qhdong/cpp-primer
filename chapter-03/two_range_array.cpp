#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

using int_array = int[4];

int main() {
    constexpr size_t rowCnt = 3, colCnt = 4;
    int a[rowCnt][colCnt] = {
        {1, 2, 3, 4},
        {4, 3, 2, 1},
        {5, 6, 7, 8}
    };

    cout << "using auto keyword..." << endl;
    for (auto &row : a) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << endl;
    }

    cout << "using begin & end..." << endl;
    for (auto p = begin(a); p != end(a); ++p) {
        for (auto q = begin(*p); q != end(*p); ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }

    cout << "using int_array = int[4]" << endl;
    for (int_array *p = a; p != a + 3; ++p) {
        for (int *q = *p; q != *p + 4; ++q) {
            cout << *q << " ";
        }
        cout << endl;
    }

    cout << "using index..." << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
