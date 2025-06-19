#include <iostream>
using namespace std;

class Base {
public:
    int x;
    Base(int val) : x(val) {}

    void show() {
        cout << "Base x: " << x << endl;
    }
};

class Derived : public Base {
public:
    int y;
    Derived(int val1, int val2) : Base(val1), y(val2) {}

    void show() {
        cout << "Derived x: " << x << ", y: " << y << endl;
    }
};

int main() {
    Derived d(10, 20);

    Base b = d;  // Object slicing happens here

    cout << "After slicing:" << endl;
    b.show();  // Only Base part is retained, y is sliced off

    return 0;
}
