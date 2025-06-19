#include <iostream>
using namespace std;

class Temp{
    double c,f;

    public:
    Temp(double c){
        this->c=c;
        f = (c * 9.0/5.0) + 32;
    }

    Temp(double f, bool isF){
        this->f=f;
        c = (f - 32) * 5.0/9.0;
    }

    void display(){
        cout<<"Celsius: "<<c<<"C"<<endl;
        cout<<"Fahrenheit: "<<f<<"F"<<endl;
    }
};

int main(){
    system("cls");
    Temp t1(30);
    cout<<"Celsius to Fahrenheit: "<<endl;
    t1.display();

    Temp t2(77,true);
    cout<<"Fahrenheit to Celsius: "<<endl;
    t2.display();
}