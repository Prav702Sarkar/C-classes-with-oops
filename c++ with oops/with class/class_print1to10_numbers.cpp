#include <iostream>
using namespace std;

class num{
    int num;
    void isProcess(){
        for(int i = 1; i <= num; i++){
            cout << i << " ";
        }
    }
public:
    void print(){
        cout <<"Enter a number= ";
        cin>> num;
        isProcess();
    }
};

int main(){
    num obj;
    obj.print();
    return 0;
}