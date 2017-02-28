#ifndef __BASKET_H_
#define __BASKET_H_

#include <set>
#include <memory>
#include <iostream>

#include "Quote.h"

class Basket {
public:
    void add_item(const Quote &sale) {
        items.insert(std::make_shared<Quote>(sale.clone()));
    }
    void add_item(Quote &&sale) {
        items.insert(std::make_shared<Quote>(std::move(sale).clone()));
    }
    double total_receipt(std::ostream&) const;
private:
    static bool compare(const std::shared_ptr<Quote> &lhs,
                        const std::shared_ptr<Quote> &rhs) {
        return lhs->isbn() < rhs->isbn();
    }
    std::multiset<std::shared_ptr<Quote>, decltype(compare)*> items{compare};
};

inline
double Basket::total_receipt(std::ostream &os) const {
    double sum = 0;
    for (auto it = items.cbegin(); it != items.cend();
            it = items.upper_bound(*it)) {
        sum += print_total(os, **it, items.count(*it));
    }
    os << "Total Sale: " << sum << std::endl;
    return sum;
}
#endif
