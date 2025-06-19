#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getP() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void show() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Employee : public Person {
public:
    int empID;
    float salary;

    void getE() {
        getP();
        cout << "Enter employee ID: ";
        cin >> empID;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void showE() {
        show();
        cout << "Employee ID: " << empID << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee e;
    e.getE();
    cout << "\nEmployee Details:\n";
    e.showE();
    return 0;
}
