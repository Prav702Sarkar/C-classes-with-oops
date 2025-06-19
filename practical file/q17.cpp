#include <iostream>
using namespace std;

class Counter {
    int value;

public:
    Counter(int v = 0) : value(v) {}

    Counter& operator++() {
        ++value;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        value++;
        return temp;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Counter c(5);

    cout << "Original: ";
    c.display();

    ++c;
    cout << "After prefix ++: ";
    c.display();

    c++;
    cout << "After postfix ++: ";
    c.display();

    return 0;
}
