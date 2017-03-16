#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

int main() {
    std::vector<int> v(5);
    std::generate(v.begin(), v.end(), std::rand);

    int n = {0};
    std::generate(v.begin(), v.end(), [&n]{ return ++n; });

    std::cout << "Contents of the vector: ";
    for (auto n : v) std::cout << n << ' ';
    std::cout << '\n';

    return 0;
}
