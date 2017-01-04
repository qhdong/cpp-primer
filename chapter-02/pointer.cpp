#include <iostream>
#include "pointer.h"

extern const int bufsize = 10;

int main() {
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    std::cout << **ppi << std::endl;

    int *&r = pi;
    int **&rr = ppi;
    rr = nullptr;
    int i = 20;
    r = &i;
    std::cout << *pi << std::endl;

    std::cout << bufsize << std::endl;

    return 0;
}
