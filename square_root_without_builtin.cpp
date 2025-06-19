#include <iostream>
#include <cmath>
using namespace std;

int main(){
    system("cls"); 
    double a, b, c;
    cout<<"Enter the base number= ";
    cin>>a;
    cout<<"Enter the exponent number= ";
    cin>>b;
    c = pow(a, b);

    cout<<"The result is "<<c<<endl;
    return 0;
}