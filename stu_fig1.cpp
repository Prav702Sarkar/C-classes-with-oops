#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string n;
    int a;
    string c;
    double g;
    int r;
    int m;

    Student(string n, int a, string c, double g, int r, int m) {
        this->n = n;
        this->a = a;
        this->c = c;
        this->g = g;
        this->r = r;
        this->m = m;
    }

    void set_data(string n, int r, int m) {
        this->n = n;
        this->r = r;
        this->m = m;
    }

    void displayInfo() {
        cout << "Name: " << n << endl;
        cout << "Age: " << a << endl;
        cout << "Course: " << c << endl;
        cout << "Grade: " << g << endl;
        cout << "Roll No: " << r << endl;
        cout << "Marks: " << m << endl;
    }

    bool hasPassed() {
        return m >= 40;
    }
};

int main() {
    Student student1("John Deo", 20, "Computer Science", 85.5, 101, 90);
    
    student1.displayInfo();

    if (student1.hasPassed()) {
        cout << student1.n << " has passed." << endl;
    } else {
        cout << student1.n << " has not passed." << endl;
    }

    return 0;
}
