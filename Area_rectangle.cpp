#include <iostream>
using namespace std;

class Rectangle{
    int l, b, A;
    public:
    Rectangle(int x, int y){
        l=x;
        b=y;
    }

    Rectangle(Rectangle &other){
        l=other.l;
        b=other.b;
    }

    Rectangle(){
        l=0;
        b=0;
    }

    void Area(){
        A=l*b;
        cout<<"Area of a rectangle= "<<A<<endl;
    }

};

int main(){
    system("cls");
    Rectangle r1(10,5);
    Rectangle r2;
    Rectangle r3(r1);

    r1.Area();
    r2.Area();
    r3.Area();
    return 0;
}