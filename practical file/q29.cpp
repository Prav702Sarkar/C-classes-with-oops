#include <iostream>
using namespace std;

class Base {
public:
    void show() {
        cout << "Base class show() function called." << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show() function called." << endl;
        Base::show();
    }
};

int main() {
    Derived d;
    d.show(); 
    return 0;
}
