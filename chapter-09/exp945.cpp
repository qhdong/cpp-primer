#include <iostream>
#include <string>

using namespace std;

void add(string &name, const string &prefix, const string &postfix) {
    name.insert(0, prefix); 
    // name.append(postfix);
    name.insert(name.size(), postfix);
}

int main() {
    string name("Dong Qihong");
    add(name, "Mr", "III");
    cout << name << endl;

    return 0;
}
