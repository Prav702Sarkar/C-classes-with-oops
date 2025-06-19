#include <iostream>
using namespace std;

class Swap{
    int a,b;

    void IsProcess(){
        a=b;
        b=a;
    }
    public:

    void setData(int x, int y){
        a=x;
        b=y;
    }

    void display(){
        cout<<"After swaping the first number is "<<a<<" and the second number is "<<b<<endl;
    }
};

int main(){
    int a,b;
    cout<<"Enter the first number= ";
    cin>>a;
    cout<<"Enter the second number= ";
    cin>>b;
    Swap s;
    s.setData(a,b);
    s.display();
    return 0;
}