#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int a;
public:
    ClassA(int val) : a(val) {}
    friend void showSum(const ClassA&, const ClassB&);
};

class ClassB {
private:
    int b;
public:
    ClassB(int val) : b(val) {}
    friend void showSum(const ClassA&, const ClassB&);
};

// Friend function definition
void showSum(const ClassA& objA, const ClassB& objB) {
    cout << "Sum: " << (objA.a + objB.b) << endl;
}

int main() {
    ClassA a(10);
    ClassB b(20);
    showSum(a, b); // Output: Sum: 30

    return 0;
}
