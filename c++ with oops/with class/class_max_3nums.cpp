#include <iostream>
using namespace std;

class Num{
    public:
    int a,b,c,max;
    void isProcess(){
        max=a;
        if(b>max){
            max=b;
        }
        else if(c>max){
            max=c;
        }
    }

    void display(){
        isProcess();
        cout<<"The maximum number is "<<max;
    }
};

int main(){
    Num n;
    cout<<"Enter the 1st number= ";
    cin>>n.a;
    cout<<"Enter the 2nd number= ";
    cin>>n.b;
    cout<<"Enter the 3rd number= ";
    cin>>n.c;
    n.display();
    return 0;

}