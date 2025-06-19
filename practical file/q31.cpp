#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area() {
        return 0;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() override {
        return width * height;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape;

    Rectangle rect(10, 5);
    Circle circ(7);

    shape = &rect;
    cout << "Area of Rectangle: " << shape->area() << endl;

    shape = &circ;
    cout << "Area of Circle: " << shape->area() << endl;

    return 0;
}
