#include <iostream>
using namespace std;

class Prime{
    int p;
public:
    Prime(int num){
        p = num;
    }

    void isProcess(){
        if(p<0 || p==0 || p==1){
            cout << "Invalid input. Please enter a positive integer.";
            return;
        }
        for(int i=2; i<=p/2; i++){
            if(p%2==0){
                cout<<p<<" is not a prime";
                return;
            }
            }
        cout<<p<<" is a prime";
    }

    void display(){
        isProcess();
    }
};

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    Prime obj(num);
    obj.display();
    return 0;
}