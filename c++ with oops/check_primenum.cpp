#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if(a<1){
        cout << a << " is not a prime number." << endl;
        return 0;
    }

    for(int i = 2; i <= a/2; i++) {
        if(a % 2 == 0){
            cout << a << " is not a prime number."<<endl;
            return 0;
        }
    }

    cout << a << " is a prime number.";

    return 0;
}