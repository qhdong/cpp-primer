#include <iostream>
#include <tuple>

using namespace std;

int main() {
    tuple<size_t, size_t, size_t> threeD(0, 1, 2);
    auto item = make_tuple("apple", 2.2, 40);
    cout << get<1>(threeD) << endl;

    typedef decltype(item) trans;
    cout << tuple_size<trans>::value << endl;

    tuple_element<0, trans>::type cnt = get<0>(item);
    cout << cnt << endl;
}
