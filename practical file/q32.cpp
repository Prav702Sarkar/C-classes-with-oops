#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Display from Base class" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Display from Derived class" << endl;
    }
};

int main() {
    Derived d;
    d.display(); 
    d.Base::display();

    return 0;
}
