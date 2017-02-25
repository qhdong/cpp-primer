#include <utility>
#include <vector>

int f() {
    return {42};
}


int main() {
    int i = 10;
    int &r = i;
    const int &rc = 12;
    int &&rr = 10;
    int &&rr2 = std::move(rr);

    std::vector<int> vi(100);

    int &&r1 = f();
    int &r2 = vi[0];
    int &r3 = r1;
    int &&r4 = vi[0] * f();

    return 0;
}
