#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
public:
    Account() = default;
    Account(const std::string &s, double amt):
        owner(s), amount(amt) { }
    void calculate() {
        amount += amount * interestRate;
    }
    double balance() {
        return amount;
    }
    static double rate() {
        return interestRate;
    }
    static void rate(double);
private:
    std::string owner;
    double amount = 0.0;
    static double interestRate;
    static double initRate() { return .0225; }
    static const std::string accountType;
    static constexpr int period = 30;
    double daily_tbl[period];
};
#endif
