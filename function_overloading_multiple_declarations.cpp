#include <iostream>
using namespace std;

class test{
    public:
    int x,y,z;
    double a,b,c;
    string m,n,o;

    void fun(int a, int b){
        x = a;
        y = b;
        z = x+y;
        cout << "Addition: " << z << endl;
    }

    void fun(double a, double b){
        c=a+b;
        cout << "Addition: " << c << endl;
    }

    void fun(char x, char y){
        m = x;
        n = y;
        o = m+n;
        cout << "Concatination: " << o << endl;
    }
};

int main(){
    test t;
    t.fun(5, 10);
    t.fun(4.5, 7.4);
    t.fun('a', 'b');
    return 0;
}

// right shift and left shift operator overloading of operator
