#include <iostream>
using namespace std;

class Leap {
    int l;  

public:
    
    Leap(int year) {
        l = year;
    }

    void isProcess() {
        if ((l % 4 == 0 && l % 100 != 0) || (l % 400 == 0)) {
            cout << l << " is a leap year." << endl;
        } 
        else {
            cout << l << " is not a leap year." << endl;
        } 
    }

    void display() {
        isProcess();
    }
};

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    Leap y(year);  
    y.display();   
    return 0;
}
