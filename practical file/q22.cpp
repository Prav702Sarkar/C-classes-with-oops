#include <iostream>
using namespace std;

class Shape {
public:
    void displayType() {
        cout << "This is a shape.\n";
    }
};

class Rectangle : public Shape {
    int length, width;
public:
    void getData() {
        cout << "Enter length and width of rectangle: ";
        cin >> length >> width;
    }

    void area() {
        cout << "Area of rectangle: " << length * width << endl;
    }
};

class Circle : public Shape {
    float radius;
public:
    void getData() {
        cout << "Enter radius of circle: ";
        cin >> radius;
    }

    void area() {
        cout << "Area of circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Rectangle r;
    Circle c;

    cout << "--- Rectangle ---\n";
    r.displayType();
    r.getData();
    r.area();

    cout << "\n--- Circle ---\n";
    c.displayType();
    c.getData();
    c.area();

    return 0;
}
