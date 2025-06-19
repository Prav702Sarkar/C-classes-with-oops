#include <iostream>
using namespace std;

class Fact {
    int n;       
    int result;  
public:
    Fact(int f) {
        n = f;
        result = 1;
    }

    void isProcess() {
        for(int i = 1; i <= n; i++) {
            result *= i;
        }
    }

    void display() {
        isProcess();
        cout << "Factorial of " << n << " is " << result << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    Fact f(num);
    f.display();
    return 0;
}