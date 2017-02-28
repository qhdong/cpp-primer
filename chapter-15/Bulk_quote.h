#ifndef __BULK_QUOTE_H_
#define __BULK_QUOTE_H_

#include "Disc_quote.h"
#include <string>
#include <utility>

class Bulk_quote: public Disc_quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string &book, double sales_price,
                size_t qty, double disc):
        Disc_quote(book, sales_price, qty, disc) {}
    double net_price(size_t n) const override;

    Bulk_quote* clone() const & override { return new Bulk_quote(*this); }
    Bulk_quote* clone() && override {
        return new Bulk_quote(std::move(*this)); }

};

double Bulk_quote::net_price(size_t n) const {
    if (n >= quantity) {
        return n * price * (1 - discount);
    } else {
        return n * price;
    }
}

#endif
