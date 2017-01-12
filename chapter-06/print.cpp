#include <iostream>
#include <iterator>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(int &x) {
    cout << x << endl;
}

void print(const int *beg, const int *end) {
    while (beg != end) {
        cout << *beg++ << ", ";
    }
    cout << endl;
}

void print(const int ia[], size_t size) {
    for (size_t i = 0; i != size; ++i) {
        cout << ia[i] << ", ";
    }
    cout << endl;
}

void print(int (&arr)[3]) {
    for (auto elem : arr) {
        cout << elem << ", ";
    }
    cout << endl;
}

void print(int (*matrix)[3], int rowSize) {
    for (int i = 0; i < rowSize; ++i) {
        for (auto elem : matrix[i]) {
            cout << elem << ", ";
        }
        cout << endl;
    }
}

void print_q(const int ia[10]) {
    for (size_t i = 0; i != 10; ++i) {
        cout << ia[i] << ", ";
    }
    cout << endl;
}
    


int main() {
    int x = 10;
    print(x);
    int arr[]{1, 2, 3};
    print(begin(arr), end(arr));
    print(arr, end(arr) - begin(arr));
    print(arr);

    cout << endl;

    int matrix[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    print(matrix, 2);

    cout << endl;
    print_q(arr);

    return 0;
}

