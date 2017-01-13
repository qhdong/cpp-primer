#ifndef _PERSON_H_
#define _PERSON_H_

#include <string>
#include <iostream>

struct Person {
    Person() = default;
    Person(const std::string &name, const std::string &addr):
        name(name), addr(addr) { }
    std::string get_name() const {
        return name;
    }

    std::string get_address() const {
        return addr;
    }

    std::string name;
    std::string addr;
};

std::istream& read(std::istream&, Person&);
std::ostream& print(std::ostream&, const Person&);

#endif
