#include <iostream>
using namespace std;

class Swap{
    int a,b;
    void isProcess(){
        int c=a;
        a=b;
        b=c;
    }
public:
     void setData(int x, int y){
        a=x;
        b=y;
     }
    void display(){
        isProcess();
        cout<<"The first number is "<<a<<" and the second is "<<b<<endl;
    }
};

int main(){
    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;
    Swap obj;
    obj.setData(a,b);
    obj.display();
    return 0;
}