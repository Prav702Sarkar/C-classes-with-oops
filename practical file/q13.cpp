#include <iostream>
using namespace std;

class Person{
    int age;

    public:
    Person(int a){
        this->age=a;
    }

    bool operator==(const Person& p){
        return age==p.age;
    }

    void display(){
        cout<<"Age: "<<age<<endl;
    }
};

int main(){
    Person p1(00);
    Person p2(25);
    Person p3(25);

    if(p1==p2){
        cout<<"p1 and p2 are of same age"<<endl;
    }
    else{
        cout<<"p1 and p2 are of different age"<<endl;
    }

    if(p1==p3){
        cout<<"p1 and p3 are of same age"<<endl;
    }
    else{
        cout<<"p1 and p3 are of different age"<<endl;
    }
    return 0;
}