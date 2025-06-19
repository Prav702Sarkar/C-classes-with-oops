#include <iostream>
using namespace std;

int main(){
    int a,c,t;
    cout << "Enter a number: ";
    cin >> a;

    for(t=1; t<=10; t++){
        c=t*a;
        cout<<a<<" * "<<t<<" = "<<c<<endl;
    }

    return 0;
}