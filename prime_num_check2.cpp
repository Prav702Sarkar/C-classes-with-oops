#include<iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 1) {
        prime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = false; // If divisible by any number, it's not prime
                break;
            }
        }
    }

    if (prime) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
