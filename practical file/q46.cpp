#include <iostream>
using namespace std;

class A; // Forward declaration

class B {
public:
    void showA(const A& obj); // Will access A's private member
};

class A {
private:
    int value;

public:
    A(int v) : value(v) {}

    // Declare class B as a friend
    friend class B;
};

// Member function of class B accessing private member of class A
void B::showA(const A& obj) {
    cout << "Value from class A: " << obj.value << endl;
}

int main() {
    A a(42);
    B b;
    b.showA(a);  // Output: Value from class A: 42

    return 0;
}
