#include <iostream>
using namespace std;

class Time{
    int h,m,s;

    public:
    Time(){
        h=m=s=0;
    }

    Time(int h,int m){
        this->h=h;
        this->m=m;
        this->s=0;
    }

    Time(int h,int m,int s){
        this->h=h;
        this->m=m;
        this->s=s;
    }

    void display(){
        cout<<"Time: "<<h<<"h"<<":"<<m<<"m"<<":"<<s<<"s"<<endl;
    }
};

int main(){
    system("cls");
    Time t1;
    Time t2(2,30);
    Time t3(2,30,45);

    cout<<"Default time: ";
    t1.display();

    cout<<"Time with hours and minutes: ";
    t2.display();

    cout<<"Full time: ";
    t3.display();
}