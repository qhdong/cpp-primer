#include <fstream>
#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, char **argv) {
    if (argc != 4) {
        cerr << "Usage: ./exp1033.out [infile] [oddfile] [evenfile]" << endl;
        return -1;
    }
    fstream in(argv[1]);
    fstream out_odd(argv[2]);
    fstream out_even(argv[3]);

    istream_iterator<int> in_iter(in), eof;
    ostream_iterator<int> odd(out_odd, " ");
    ostream_iterator<int> even(out_even, "\n");

    for_each(in_iter, eof, [&](int x) {
            (x & 1) ? *odd++ = x : *even++ = x;
            });

    return 0;
}
