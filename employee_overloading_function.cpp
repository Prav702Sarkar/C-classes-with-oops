#include <iostream>
using namespace std;

class employee{
    int id;
    string name;
    double salary;

    public:
    void employ(int id, string name, double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }

    void employ(int id, string name){
        this->id=id;
        this->name=name;
    }

    void employ(int id, double salary){
        this->id=id;
        this->salary=salary;
    }

    void display(){
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};

int main(){
    system("cls");
    employee e1,e2,e3;
    e1.employ(1, "John Doe", 50000);
    e2.employ(2, "Paarth");
    e3.employ(3, 60000);
    e1.display();
    e2.display();
    e3.display();
    return 0;
}