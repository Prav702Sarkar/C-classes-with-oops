#include <iostream>
using namespace std;

// Default constructor is also known as a zero-argument constructor, as it doesn't take any parameter. It can be defined by the user if not then the compiler creates it on his own. Default constructor always initialize data members of the class with the same value they were defined.

class Student {
    public:
    string name;
    int roll_no;
    int marks;

    Student(){
        cout<<"Student class default constructor\n";
    }

    Student(string name, int roll_no, int marks){  //parameterized constructor
        this->name = name;
        this->roll_no = roll_no;
        this->marks = marks;
    }

    Student(Student &other){ //copy constructor
        this->name = other.name;
        this->roll_no = other.roll_no;
        this->marks = other.marks; 
    }

    void student(string name, int roll_no, int marks){
        this->name = name;
        this->roll_no = roll_no;
        this->marks = marks;
    }

    void print(){
        cout<<"My name is "<<name<<" and my roll no. is "<<roll_no<<". I got "<<marks<<" marks."<<endl;
    }
};

int main(){
    Student s1;
    system("cls");
    s1.student("John Doe", 1, 90);
    s1.print();

    Student s2(s1);
    s2.print();
}

// function / operator / constructor overloading rule :-
// 1. same name
// 2. same class 
// 3. number of parameters different 
// 4. if any case the no. of parameters are same then types of parameters should be different.

// 25/3/25
// function overloading, polymorphism -> Poly means many & morphism means loom
// compile time polymorphism(Static Binding)

// function overloading rules:-
// 1. function overloading that must be perform in same class
// 2. function name should be same 
// 3. the number of parameters should be different
    //  3.a. ->If the number of parameters are same then type of parameters should be different.