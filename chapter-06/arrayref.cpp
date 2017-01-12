#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;
using arrT = int[10];

typedef int arrT2[10];

string (&get_array(int x))[10];

arrT *get_array_pointer(int x);
arrT2 *get_array_pointer(int x);

auto get_array_tail(int x) -> int(*)[10];
auto get_array_tail_reference(int x) -> int(&)[10];

int a[10];

decltype(a) *arrPtr(int i);

int main() {
    return EXIT_SUCCESS;
}
