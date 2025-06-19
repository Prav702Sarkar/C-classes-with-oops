#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter the first side= ";
    cin>>a;
    cout<<"Enter the second side= ";
    cin>>b;
    cout<<"Enter the third side= ";
    cin>>c;

    if(a==b && b==c){
        cout<<"It is an equilateral triangle.";
    }
    else if(a==b || b==c || a==c){
        cout<<"It is an isosceles triangle.";
    }
    else{
        cout<<"It is an scalene triangle.";
    }
    return 0;
}