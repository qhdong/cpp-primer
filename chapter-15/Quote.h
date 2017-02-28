#ifndef __QUOTE_H_
#define __QUOTE_H_

#include <string>
#include <utility>
#include <iostream>

class Quote {
public:
    Quote() = default;
    Quote(const std::string &book, double sales_price):
        bookNo(book), price(sales_price) { }
    std::string isbn() const { return bookNo; }

    Quote(const Quote&) = default;
    Quote(Quote&&) = default;
    Quote& operator=(const Quote&) = default;
    Quote& operator=(Quote&&) = default;

    virtual Quote* clone() const & { return new Quote(*this); }
    virtual Quote* clone() && { return new Quote(std::move(*this)); }

    virtual double net_price(size_t n) const { return n * price; }
    virtual ~Quote() = default;
    virtual void debug() const { std::cout << "bookNo: " << bookNo
                                << ", price: " << price << std::endl;}
private:
    std::string bookNo;
protected:
    double price = 0.0;
};

double print_total(std::ostream &os, const Quote &item, size_t n) {
    double price = item.net_price(n);
    os << "ISBN: " << item.isbn() << " total due: " << price << std::endl;
    return price;
}
#endif
