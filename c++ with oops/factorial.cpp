#include <iostream>
using namespace std;

int main() {
    int f,fact;
    cout << "Enter a number: ";
    cin >> f;

    fact = 1;
    for(int i = 1; i <= f; i++) {
        fact *= i;
    }

    cout << "Factorial of " << f << " is: " << fact << endl;

    return 0;
}