#include "Person.h"

using std::istream;
using std::ostream;

istream& read(istream &is, Person &person) {
    is >> person.name >> person.addr;
    return is;
}

ostream& print(ostream &os, const Person &person) {
    os << "name: " << person.get_name()
        << ", address: " << person.get_address();
    return os;
}

