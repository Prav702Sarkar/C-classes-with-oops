#include <iostream>
using namespace std;

class A {
public:
    A() { 
        cout << "Constructor of A" << endl; 
    }
    virtual void display() { 
        cout << "Display from A" << endl; 
    }
};

class B {
public:
    B() { 
        cout << "Constructor of B" << endl; 
    }
    virtual void display() { 
        cout << "Display from B" << endl; 
    }
};

class C {
public:
    C() { 
        cout << "Constructor of C" << endl; 
    }
    virtual void display() { 
        cout << "Display from C" << endl; 
    }
};

class D : public virtual C, public A, public B {
public:
    D() {
        cout << "Constructor of D" << endl;
    }
    void display() override { 
        cout << "Display from D" << endl; 
    }
};

int main() {
    D obj;
    obj.display();
    return 0;
}
