#include <iostream>
using namespace std;

class Person {
private:
    int age; // private data

public:
    void setAge(int a) {
        if (a > 0)
            age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person p;
    p.setAge(25);               // Set age using public method
    cout << p.getAge() << endl; // Get age using public method

    return 0;
}
