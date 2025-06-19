#include <iostream>
using namespace std;

int main() {
    system("cls");
    int lower, upper;

    cout<<"Enter the lower limit= ";
    cin >> lower;
    
    cout<<"Enter the upper limit= ";
    cin >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; num++) {
        if (num < 1) continue;
        
        int isPrime = true; 
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false; 
                break;
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
