#include <iostream>
using namespace std;

class Student{
    int roll_no;
    string name;
    double marks;

    public:
    void isprocess(int r, double m, string n){
        this->roll_no=r;
        this->marks=m;
        this->name=n;
    }

    void display(){
        cout<<"\n";
        cout<<"name= "<<name<<endl;
        cout<<"roll no= "<<roll_no<<endl;
        cout<<"marks= "<<marks<<endl;
    }
};

int main(){
    system("cls");
    int roll_no;
    double marks;
    string name;

    cout<<"Name: ";
    cin>>name;
    cout<<"Roll no. ";
    cin>> roll_no;
    cout<<"marks: ";
    cin>>marks;

    Student s;
    s.isprocess(roll_no,marks,name);
    s.display();
    return 0;
}