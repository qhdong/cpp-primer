#include <memory>

#include "Quote.h"
#include "Bulk_quote.h"
#include "Basket.h"

using namespace std;

int main() {
    Basket bsk;
    Quote a("123", 45);
    Bulk_quote bq("345", 45, 3, .15);

    bsk.add_item(a);
    bsk.add_item(a);
    bsk.add_item(bq);
    bsk.add_item(bq);

    bsk.total_receipt(cout);

    return 0;
}
