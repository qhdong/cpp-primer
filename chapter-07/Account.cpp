#include <string>
#include "Account.h"

using std::string;

const string Account::accountType("Savings Account");
double Account::interestRate = initRate();

void Account::rate(double newRate) {
    interestRate = newRate;
}
