#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    virtual void work() = 0;
    virtual void displayRole() = 0;
};

class Engineer : public Employee {
public:
    void work() override {
        cout << "Engineer is developing software." << endl;
    }

    void displayRole() override {
        cout << "Role: Engineer" << endl;
    }
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager is managing the team." << endl;
    }

    void displayRole() override {
        cout << "Role: Manager" << endl;
    }
};

int main() {
    Employee* emp1 = new Engineer();
    Employee* emp2 = new Manager();

    emp1->displayRole();
    emp1->work();

    emp2->displayRole();
    emp2->work();

    return 0;
}
