#include <iostream>
#include <set>
#include "Sales_item.h"

using namespace std;

bool compareIsbn(const Sales_item &lhs, const Sales_item &rhs) {
    return lhs.isbn() < rhs.isbn();
}

int main() {
    multiset<Sales_item, decltype(compareIsbn)*> bookstore(compareIsbn);
    return 0;
}
