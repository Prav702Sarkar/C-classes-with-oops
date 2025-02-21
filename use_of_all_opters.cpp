#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    
    cout << "Enter the three numbers= ";
    cin >> a>>b>>c;

    cout <<" a+b+c= "<<(a+b+c)<<"(Addition of all numbers)\n";
    cout <<" a+b*c= "<<(a+b*c)<<"(Multiplication has higher precedence)\n";
    cout <<" (a+b)*c= "<<((a+b)*c)<<"(Parenthesis force addition first)\n";
    cout <<" a+b/c*2= "<<(a+b/c*2)<<"(Division and MUltiplication evaluated)\n";
    cout <<" a%b+c= "<<(a%b+c)<<"(Modulus before addition)\n";
    cout <<" a>b&&b<c= "<<(a>b && b<c)<<"(AND before OR)\n";
    cout <<" a>b||b<c= "<<(a>b || b<c)<<"(OR has lower precedence than AND)\n";

    return 0;
}