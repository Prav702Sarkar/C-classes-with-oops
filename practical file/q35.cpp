#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }
    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
    ~Derived() {
        cout << "Derived destructor called" << endl;
    }
};

int main() {
    Base* b = new Derived();
    delete b;

    return 0;
}
