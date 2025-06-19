#include <iostream>
using namespace std;

class area{
    int l,b;
    public:
    area(int a, int b){
        this->l=a;
        this->b=b;
        cout<<"Area of the wall= "<<a*b<<endl;
    }
};

int main(){
    area a(5,6);
    return 0;
}