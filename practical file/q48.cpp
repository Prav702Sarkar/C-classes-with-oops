#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    // Default constructor
    MyClass() {
        value = 0;
        cout << "Default constructor called. Value = " << value << endl;
    }

    // Parameterized constructor
    MyClass(int v) {
        value = v;
        cout << "Parameterized constructor called. Value = " << value << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called. Value was " << value << endl;
    }
};

int main() {
    MyClass obj1;       // Calls default constructor
    MyClass obj2(42);   // Calls parameterized constructor

    return 0;
}
