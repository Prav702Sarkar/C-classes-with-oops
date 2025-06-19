#include <iostream>
using namespace std;

class Area{
    int l,b;

    public:
    void area(int a,int b){
        this->l=a;
        this->b=b;
        cout<<"Area of rectangle is "<<l*b<<endl;
    }

    void area(int a){
        this->l=a;
        cout<<"Area of circle is "<<3.14*a*a<<endl;
    }

    void area(float b, int h){
        this->l=h;
        this->b=b;
        cout<<"Area of triangle is "<<0.5*h*b<<endl;
    }
};

int main(){
    Area a1,a2,a3;
    a1.area(5,6);
    a2.area(5);
    a3.area(5.0f,6);
    return 0;
}