#include "Sales_data.h"

Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
}

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

