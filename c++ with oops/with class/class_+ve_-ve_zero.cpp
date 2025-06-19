#include <iostream>
using namespace std;

class Num{
    int num;
    
    void isProcess(){
        if(num>0){
            cout << num << " is positive" << endl;
        }
        else if(num<0){
            cout << num << " is negative" << endl;
        }
        else{
            cout << num << " is zero" << endl;
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
    Num obj;
    obj.display();
    return 0;
}