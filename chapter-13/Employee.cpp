#include <string>

using namespace std;

class Employee {
public:
    Employee(): name("[noname]"), sn(++cnt) {}
    Employee(string name): name(name), sn(++cnt) {}
private:
    string name;
    size_t sn;
    static size_t cnt;
};

size_t Employee::cnt = 0;

int main() {
    Employee noname;
    Employee tom("Tom");

    return 0;
}
