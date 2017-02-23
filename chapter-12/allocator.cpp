#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <iterator>

using namespace std;

int main() {
    const size_t n = 42;
    // string *const p = new string[n];
    // string *q = p;
    // string s;
    // while (cin >> s && q != p + n) {
    //     *q++ = s;
    // }
    // cout << "sz: " << q - p << endl;

    // delete[] p;

    istream_iterator<int> in_iter(cin), eof;
    vector<int> vi(in_iter, eof);

    allocator<int> alloc;
    auto const p = alloc.allocate(vi.size() * 2);
    auto q = uninitialized_copy(vi.begin(), vi.end(), p);
    q = uninitialized_fill_n(q, vi.size(), 42);

    for (auto pi = p; pi != q; ++pi) {
        cout << *pi << " ";
    }
    cout << endl;

    while (q != p) {
        alloc.destroy(--q);
    }

    alloc.deallocate(p, vi.size() * 2);

    return 0;
}
