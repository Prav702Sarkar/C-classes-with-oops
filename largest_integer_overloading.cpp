#include <iostream>
using namespace std;

class number{
    int a,b,c;
    float x,y;

    public:
    void num(int m,int n){
        this->a=m;
        this->b=n;
        if(m>n){
            cout<<m<<" is the largest number"<<endl;
        }
        else{
            cout<<n<<" is the largest number"<<endl;
        }
    }

    void num(int m,int n, int o){
        this->a=m;
        this->b=n;
        this->c=o;
        if(m>n && m>o){
            cout<<m<<" is the largest number"<<endl;
        }
        else if(n>m && n>o){
            cout<<n<<" is the largest number"<<endl;
        }
        else{
            cout<<o<<" is the largest number"<<endl;
        }
    }

    void num(float a, float b){
        this->x=a;
        this->y=b;
        if(a>b){
            cout<<a<<" is the largest number"<<endl;
        }
        else{
            cout<<b<<" is the largest number"<<endl;
        }
    }
};

int main(){
    system("cls");
    number num;
    num.num(5,3);
    num.num(7,4,2);
    num.num(5.5f,3.5f);
    return 0;
}