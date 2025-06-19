#include <iostream>
using namespace std;

class Des{
    public:
    Des(){
        cout<<"Constructor is called";
    }

    ~Des(){
        cout<<"\nConstructor is destroyed";
    }
};

int main(){
    Des d1;
}