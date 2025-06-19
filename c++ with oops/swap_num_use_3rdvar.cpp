#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter the first number= ";
    cin>>a;
    cout<<"Enter the second number= ";
    cin>>b;

    c=a;
    a=b;
    b=c;

    cout<<"After swapping, the first number is "<<a<<" and the second number is "<<b<<endl;

    return 0;
}