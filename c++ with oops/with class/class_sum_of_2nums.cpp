#include <iostream>
using namespace std;

class Sum{
    int num1, num2, result;
public:
    Sum(int x, int y){
        num1 = x;
        num2 = y;
    }

    void isProcess(){
        result = num1 + num2;
        cout<<"Sum of the two numbers are= "<<result<<endl;
    }

    void display(){
        cout<<"Enter the 1st number= ";
        cin>>num1;
        cout<<"Enter the 2nd number= ";
        cin>>num2;
        isProcess();
    }
};

int main(){
    Sum sum(5,10);
    sum.display();
    return 0;
}