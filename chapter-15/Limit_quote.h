#ifndef __LIMIT_QUOTE_H_
#define __LIMIT_QUOTE_H_

#include <string>
#include "Disc_quote.h"

class Limit_quote: public Disc_quote {
public:
    Limit_quote() = default;
    Limit_quote(const std::string &book, double p,
                size_t qty, double disc):
        Disc_quote(book, p, qty, disc) {}
    double net_price(size_t n) const override;
};

double Limit_quote::net_price(size_t n) const {
    if (n <= quantity) {
        return n * price * (1 - discount);
    } else {
        return n * price;
    }
}
#endif
