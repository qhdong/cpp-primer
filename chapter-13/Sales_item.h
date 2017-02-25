#ifndef __SALES_ITEM_H_
#define __SALES_ITEM_H_

#include <string>
#include <iostream>
#include <stdexcept>

class SalesItem {
    friend std::ostream& operator<<(std::ostream&, const SalesItem&);
    friend std::istream& operator>>(std::istream&, SalesItem&);
    friend SalesItem operator+(const SalesItem&, const SalesItem&);
    // friend bool operator<(const SalesItem&, const SalesItem&);
    friend bool operator==(const SalesItem&, const SalesItem&);
    friend bool operator!=(const SalesItem&, const SalesItem&);
public:
    // constructors
    SalesItem() = default;
    SalesItem(const std::string &s): bookNo(s) {}
    SalesItem(std::istream &is) { is >> *this; }

    // api
    std::string isbn() const { return bookNo; }
    double avg_price() const { return units_sold ? revenue / units_sold : 0; }

    // reload operators
    SalesItem& operator+=(const SalesItem&);
    SalesItem& operator=(const string&);
private:
    // members
    std::string bookNo;
    size_t units_sold = 0;
    double revenue = 0.0;
}

inline
SalesItem& SalesItem::operator+=(const SalesItem &s) {
    if (bookNo != s.bookNo) {
        throw runtime_error("not equal items can't add");
    }

    units_sold += s.units_sold;
    revenue += s.revenue;
    return *this;
}

inline
SalesItem& SalesItem::operator=(const string &s) {
    bookNo = s;
    return *this;
}

std::ostream& operator<<(std::ostream &os, const SalesItem &s) {
    os << s.bookNo << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return os;
}

std::istream& operator>>(std::istream &is, SalesItem &s) {
    double price;
    is >> s.bookNo >> s.units_sold >> price;
    if (is) {
        s.revenue = s.units_sold * price;
    } else {
        s = SalesItem();
    }
    return is;
}

SalesItem operator+(const SalesItem &lhs, const SalesItem &rhs) {
    SalesItem ret(lhs);
    ret += rhs;
    return ret;
}

bool operator==(const SalesItem &lhs, const SalesItem &rhs) {
    return lhs.isbn() == rhs.isbn()
        && lhs.units_sold == rhs.units_sold
        && lhs.revenue == rhs.revenue;
}

bool operator!=(const SalesItem &lhs, const SalesItem &rhs) {
    return !(lhs == rhs);
}

#endif
