#include <iostream>
using namespace std;

class Num{
    int* num;

    public:
    Num(int n){
        num = new int(n);
    }

    ~Num(){
        delete num;
        cout<<"Num destroyed."<<endl;
    }

    void display(){
        cout <<"Num= "<<*num << endl;
    }
};

int main(){
    Num n1(10);
    n1.display();
    return 0;
}