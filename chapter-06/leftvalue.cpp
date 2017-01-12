#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

char &get_val(string &s, string::size_type idx) {
    return s[idx];
}

vector<string> process(const int &x) {
    if (x > 0) {
        return {"hello", "world"};
    } else {
        return {"Oh", "no!"};
    }
}

template <class T>
void print(const vector<T> &v, size_t i = 0) {
    if (i != v.size()) {
        cout << v[i] << " ";
        print(v, ++i);
    } else {
        cout << endl;
    }
}

int factorial(int val) {
    if (val > 0) { // should not be val != 0 because if val < 0 then boom...
        return factorial(val-1) * val;
    }
    return 1;
}


int main() {
    string s("hello, world");
    cout << s << endl;
    get_val(s, 5) = '!';
    cout << s << endl;

    vector<string> v = process(0);
    // for (auto s : v) {
    //     cout << s << " ";
    // }
    print(v);

    cout << factorial(120) << endl;


    return EXIT_SUCCESS;
}

