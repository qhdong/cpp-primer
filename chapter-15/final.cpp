#include <iostream>

class NoDerive final {};
class Base {
public:
    virtual void fun() const { std::cout << "Let's Go!" << std::endl;}
protected:
    static void foo() { std::cout << "hello" << std::endl;}
};

class Overide: public Base {
public:
    void fun() const override final { std::cout << "Go Go Go!" << std::endl;}
};

class Derived: public Overide {
public:
    // void fun() const override { std::cout << "No" << std::endl;}
};

class Last final:  Base {
public:
    static void bar() {
        Base::foo();
        Last::foo();
        foo();
    }
};
// class Wrong: protected Last {};

int main() {
    Last::bar();

    Derived d;
    Base *pbase = &d;
    d.fun();
    pbase->Base::fun();

    return 0;
}
