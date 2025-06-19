#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout<<"Enter the first number= ";
    cin>>a;

    cout<<"Enter the second number= ";
    cin>>b;

    a=b;
    b=a;
    cout<<"After swapping, the first number becomes "<<a<<" and the second number becomes "<<b<<endl;
}