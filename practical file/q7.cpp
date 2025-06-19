#include <iostream>
using namespace std;

class MyClass{
    int* data;

    public:
    MyClass(int value){
        data = new int(value);
        *data=value;
    }

    MyClass(const MyClass& other){
        data=new int;
        *data=*other.data;
    }

    void show(){
        cout<<"Value: "<<*data<<endl;
    }
};

int main(){
    MyClass obj1(10);
    obj1.show();

    MyClass obj2(obj1);
    obj2.show();
}