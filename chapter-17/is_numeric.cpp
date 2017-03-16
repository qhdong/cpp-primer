#include <iostream>
#include <regex>
#include <string>

int main() {
    std::regex r("^[\\+-]?[0-9]*(\\.[0-9]+)?([eE]?[\\+-]?[0-9]+)?$");
    std::string number;
    while (std::cin >> number) {
        if (std::regex_match(number, r)) {
            std::cout << "yes, it's a legal number.\n";
        }
        else {
            std::cout << "Nope. Try again!\n";
        }
    }

    return 0;
}
