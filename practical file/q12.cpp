#include <iostream>
using namespace std;

class Complex{
    float real, imag;

    public:
    Complex(float r = 0, float i = 0){
        this->real=r;
        this->imag=i;
    }

    Complex operator+(const Complex& c){
        return Complex(real + c.real, imag + c.imag);
    }

    void display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};

int main(){
    Complex c1(3.5,2.5);
    Complex c2(1.5,1.5);

    Complex sum = c1 + c2;

    cout<<"First complex number: ";
    c1.display();

    cout<<"Second complex number: ";
    c2.display();

    cout<<"Sum: ";
    sum.display();
    return 0;
}