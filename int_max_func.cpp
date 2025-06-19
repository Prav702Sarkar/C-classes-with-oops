#include <iostream>
using namespace std;

int maximum(int a, int b, int c, int d){
    if(a>b && a>c && a>d){
        cout<<a<<" is the largest";
    }
    else if(b>a && b>c && b>d){
        cout<<b<<" is the largest";
    }
    else if(c>a && c>b && c>d){
        cout<<c<<" is the largest";
    }
    else{
        cout<<d<<" is the largest";
    }
    return 0;
}

int main(){
    maximum(10,20,30,5);
    return 0;
}