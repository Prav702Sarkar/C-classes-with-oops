#include <iostream>
using namespace std;

int gcd(int x, int y){
    while(y!=0){
        int temp = y;
        y = x%y;
        x = temp;
    }
    return x;
}

int lcm(int x, int y){
    return (x*y)/gcd(x, y);
}

int main() {
    system("cls");
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout<< "lcm of two numbers "<<num1<<" and "<< num2<<" is "<<lcm(num1, num2)<<endl;

    return 0;
}