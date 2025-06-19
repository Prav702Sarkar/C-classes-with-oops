#include <iostream>
using namespace std;

class Table{
    int t,c;

    void isProcess(int a){
        for(int t=1;t<=10;t++){
            c=t*a;
            cout<<a<<" x "<<t<<" = "<<c<<endl;
        }
    }
public:
    void display(){
        int a;
        cout<<"Enter a number: ";
        cin>>a;
        isProcess(a);
    }
};

int main(){
    Table obj;
    obj.display();
    return 0;
}