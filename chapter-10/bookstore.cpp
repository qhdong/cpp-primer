#include <iostream>
#include <fstream>
#include <iterator>
#include "Sales_item.h"

using namespace std;

int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "Usage: ./bookstore [filename]" << endl;
        return -1;
    }
    ifstream in(argv[1]);
    istream_iterator<Sales_item> item_iter(in), eof;
    ostream_iterator<Sales_item> out_iter(cout, "\n");

    Sales_item sum = *item_iter++;
    while (item_iter != eof) {
        if (item_iter->isbn() == sum.isbn()) {
            sum += *item_iter++;
        } else {
            out_iter = sum;
            sum = *item_iter++;
        }
    }
    out_iter = sum;

    return 0;
}
