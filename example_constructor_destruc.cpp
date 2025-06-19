#include <iostream>
using namespace std;

class Sum {
private:
    int num1, num2;

public:
    Sum(int a, int b) {
        num1 = a;
        num2 = b;
        cout << "Object created. Numbers initialized: " << num1 << " and " << num2 << endl;
    }

    ~Sum() {
        cout << "Object destroyed." << endl;
    }

    int getSum() {
        return num1 + num2;
    }
};

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a>> b;

    Sum obj(a, b);
    cout << "Sum: " << obj.getSum() << endl;

    return 0;
}
