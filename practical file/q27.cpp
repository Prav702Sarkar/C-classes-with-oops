#include <iostream>
using namespace std;

class Base {
protected:
    int x;

public:
    Base() : x(0) {}
    void setX(int value) {
        x = value;
    }
};

class Derived : public Base {
public:
    void showX() {
        cout << "Value of x in derived class: " << x << endl;
    }
};

int main() {
    Derived d;
    d.setX(10);
    d.showX();
    return 0;
}
