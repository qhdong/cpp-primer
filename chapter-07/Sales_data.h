#ifndef _SALES_DATA_H_
#define _SALES_DATA_H_

#include <string>
#include <iostream>

class Sales_data {
    friend std::ostream& print(std::ostream&, const Sales_data&);
    friend std::istream& read(std::istream&, Sales_data&);
public:
    Sales_data(const std::string &s, const unsigned n, const double p):
        bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(): Sales_data("", 0, 0) { }
    Sales_data(const std::string &s): Sales_data(s, 0, 0) { } 
    Sales_data(std::istream &is): Sales_data() { // 委托构造函数
        read(is, *this);
    }
    std::string isbn() const { return bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

std::ostream& print(std::ostream&, const Sales_data&);
std::istream& read(std::istream&, Sales_data&);

Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}

std::ostream& print(std::ostream &os, const Sales_data &item) {
    os << "ISBN: " << item.isbn() << ", units_sold: " << item.units_sold
        << ", revenue: " << item.revenue
        << ", avg_price: " << item.avg_price();
    return os;
}

std::istream& read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

#endif
