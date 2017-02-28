#include "Quote.h"
#include "Bulk_quote.h"
#include "Limit_quote.h"

#include <string>
#include <iostream>

using namespace std;

int main() {
    Quote item("2232-X-223", 23.78);
    Bulk_quote bulk("2232-X-223", 23.78, 100, 0.3);

    Bulk_quote bulk2("2233-xxxx", 333.33, 100, 0.3);
    Quote item2(bulk2);

    Limit_quote limit("2202-X-99", 23, 5, 0.2);

    print_total(cout, item, 100);
    print_total(cout, bulk, 100);
    print_total(cout, item2, 100);

    print_total(cout, limit, 5);
    print_total(cout, limit, 6);

    // Disc_quote dq;

    item.debug();

    return 0;
}
