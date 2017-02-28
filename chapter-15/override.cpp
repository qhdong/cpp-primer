class Base {
public:
    int memfcn() const { return 2;}
};

class Derived: public Base {
public:
    int memfcn(int i) const { return i; }
};

int main() {
    // Base b;
    Derived d;
    d.memfcn(2);
    d.Base::memfcn();

    return 0;
}
