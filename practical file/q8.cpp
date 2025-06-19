#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display() const {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main(){
    Date today(18, 4, 2025);
    today.display();

    return 0;
}
