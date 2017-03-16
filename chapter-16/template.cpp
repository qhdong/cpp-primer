#include <iostream>
#include <functional>
#include <vector>
#include <cstring>
#include <list>
#include <algorithm>
#include <random>

using namespace std;

template <typename InputIt, typename T>
InputIt find(InputIt first, InputIt last, const T& value) {
    for (; first != last; ++first) {
        if (*first == value) {
            return first;
        }
    }
    return last;
}

template <typename T> inline
int compare(const T &v1, const T &v2) {
    if (less<T>()(v1, v2)) return -1;
    if (less<T>()(v2, v1)) return 1;
    return 0;
}

template <unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M]) {
    return strcmp(p1, p2);
}

template <typename ForwardIterator, typename T>
void iota(ForwardIterator first, ForwardIterator last, T value) {
    while (first != last) {
        *first++ = value++;
    }
}

template <typename T>
void print_vector(const vector<T>& v) {
    for (auto n : v) {
        cout << n << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v1{1,2,3}, v2{1,3,4};
    cout << compare(1, 2) << endl;
    cout << compare(2.2, 3.3) << endl;
    cout << compare(v1, v2) << endl;
    cout << compare("hello", "wor") << endl;

    vector<const char*> cats = {"dong", "hong", "xu", "zhao"};


    return 0;
}
