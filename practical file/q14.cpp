#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:

    void set(int f, float i) {
        feet = f;
        inches = i;
    }

    int getFeet() const{ 
        return feet; 
    }

    float getInches() const{ 
        return inches; 
    }
};

istream& operator>>(istream& in, Distance& d) {
    int feet;
    float inches;
    in >> feet >> inches;
    d.set(feet, inches);
    return in;
}

ostream& operator<<(ostream& out, const Distance& d) {
    out << d.getFeet() << " feet " << d.getInches() << " inches";
    return out;
}

int main() {
    Distance d;

    cout << "Enter feet and inches (e.g., 5 8.5): ";
    cin >> d;

    cout << "You entered: " << d << endl;

    return 0;
}