#include <iostream>
using namespace std;

class student{
    string name;
    int age;
    public:
    student(string name){
        this->name = name;
    }

    student(string name, int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    student s1("John");
    student s2("Jane", 20);
    s1.display();
    s2.display();
    return 0;
}