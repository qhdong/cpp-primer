#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

class PrintString {
public:
    PrintString(ostream &o = cout, const string &s = ", ")
        :os(o), sep(s) {}
    void operator()(const string &s) { os << s << sep; }
private:
    ostream &os;
    const string sep;
};

class ReadString {
public:
    ReadString(istream &is = cin): in(is) {}
    string operator()(); 
private:
    istream &in;
    string s;
};


inline string ReadString::operator()() {
    s.clear();
    char c;
    while (in >> c && c != '\n') {
        s += c;
    }
    return s;
}


int main() {
    // PrintString print(cerr, " # ");
    // istream_iterator<string> is(cin), eof;
    // vector<string> vec(is, eof);
    // for_each(vec.begin(), vec.end(), PrintString(cerr, " # "));
    // cout << endl;

    ReadString read;
    cout << read() << endl;

    return 0;
}
