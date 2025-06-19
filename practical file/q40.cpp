#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const {
        return 0;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

int main() {
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);

    cout << "Circle area: " << s1->area() << endl;
    cout << "Rectangle area: " << s2->area() << endl;
    return 0;
}
