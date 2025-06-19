#include <iostream>
using namespace std;

class Vector {
    int x, y;

public:
    Vector(int a = 0, int b = 0) : x(a), y(b) {}

    Vector operator-() {
        return Vector(-x, -y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(5, -3);
    cout << "Original vector: ";
    v1.display();

    Vector v2 = -v1;
    cout << "Negated vector: ";
    v2.display();

    return 0;
}
