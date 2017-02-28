#include <iostream>
#include "Quote.h"
#include "Bulk_quote.h"
#include <vector>
#include <memory>

using namespace std;

int main() {
    vector<shared_ptr<Quote>> basket;
    basket.push_back(make_shared<Quote>("0-210-33493-X", 50));
    basket.push_back(make_shared<Bulk_quote>("0-210-33493-X", 50, 10, .25));
    for (auto p : basket) {
        cout << p->net_price(15) << endl;
    }

    return 0;
}
