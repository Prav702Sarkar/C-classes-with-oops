// polymorphism

// compile time -> static binding
// -> func. overloading
// -> operator ]


// runtime -> dynamic binding
// -> func. overloading
// -> dynamic method duplicate

// virtual function 
// abstract class

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"This is Animal";
    }
};

class Dog : public Animal{
    public:
    void speak() override{
        cout<<"Bow Bow"<<endl;
    }
};

class Cat : public Animal{
    public:
    void speak() override{
        cout<<"Meow meow"<<endl;
    }
};

int add(int a, int b){
    return a + b;
}

int main(){
    Dog dog;
    Cat cat;

    dog.speak();
    cat.speak();

    cout<<add(3,5);
    return 0;
}