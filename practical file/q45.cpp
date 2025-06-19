#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Constructor (inline)
    Rectangle(int w, int h) : width(w), height(h) {}

    // Inline function to calculate area
    int area() const {
        return width * height;
    }

    // Inline function to calculate perimeter
    int perimeter() const {
        return 2 * (width + height);
    }

    // Inline display function
    void display() const {
        cout << "Area: " << area() << ", Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle rect(5, 3);
    rect.display(); // Output: Area: 15, Perimeter: 16

    return 0;
}
