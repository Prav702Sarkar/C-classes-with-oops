#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Person Constructor Called\n";
    }
};

class Employee : public Person {
public:
    Employee() {
        cout << "Employee Constructor Called\n";
    }
};

class Manager : public Employee {
public:
    Manager() {
        cout << "Manager Constructor Called\n";
    }
};

int main() {
    Manager m;
    return 0;
}
