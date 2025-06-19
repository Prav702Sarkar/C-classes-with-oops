#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void get() {
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

    void getEmployeeData() {
        get();
        cout << "Enter employee ID: ";
        cin >> empID;
    }

    void showEmployeeData() {
        show();
        cout << "Employee ID: " << empID << endl;
    }
};

class Manager : public Employee {
public:
    string department;

    void getManagerData() {
        getEmployeeData();
        cout << "Enter department: ";
        cin >> department;
    }

    void showManagerData() {
        showEmployeeData();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;
    m.getManagerData();
    cout << "\nManager Details:\n";
    m.showManagerData();
    return 0;
}
