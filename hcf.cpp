#include <iostream>
using namespace std;

int main() {
    int a=5, b=10,x,y;
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    cout << a;
    int i = (x*y)/a;
    cout << i;
    return 0;
}