#include <iostream>
using namespace std;

class Num{
    int num;

    void isProcess(){
        if(num%2==0){
            cout<<num<<" is an even number.";
        }
        else{
            cout<<num<<" is an odd number.";
        }
    }
    public:
    void display(){
        cout<<"Enter the number= ";
        cin>>num;
        isProcess();
    }
};

int main(){
    Num n;
    n.display();
    return 0;
}