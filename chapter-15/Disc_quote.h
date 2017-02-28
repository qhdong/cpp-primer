#ifndef __DISC_QUOTE_H_
#define __DISC_QUOTE_H_

#include "Quote.h"
#include <string>
#include <utility>

class Disc_quote: public Quote {
public:
    Disc_quote() = default;
    Disc_quote(const std::string &book, double p,
            size_t qty, double disc):
        Quote(book, p), quantity(qty), discount(disc) { }

    Disc_quote(const Disc_quote &d): Quote(d) {
        quantity = d.quantity;
        discount = d.discount;
    }

    Disc_quote& operator=(const Disc_quote &rhs) {
        Quote::operator=(rhs);
        quantity = rhs.quantity;
        discount = rhs.discount;
        return *this;
    }

    double net_price(size_t n) const override = 0;
    std::pair<size_t, double> discount_policy() const {
        return {quantity, discount};
    }
protected:
    size_t quantity = 0;
    double discount = 0.0;
};

#endif
