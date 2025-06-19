#include <iostream>
using namespace std;

class cal{
    int a,b,c;
    float x,y,z;
    string n,m,o;

    public:
    void sum(int i,int j){
        a=i;
        b=j;
        c=a+b;
        cout<<"Addition= "<<c<<endl;
    }

    void sum(float i,float j){
        x=i;
        y=j;
        z=x+y;
        cout<<"Addition= "<<z<<endl;
    }

    void sum(char s,char b){
        n=s;
        m=b;
        o=n+m;
        cout<<"Concatination= "<<o<<endl;
    }
};

int main(){
    system("cls");
    cal c;
    c.sum(5,7);
    c.sum(5.5f,7.7f);
    c.sum('a','b');
}