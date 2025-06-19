#include <iostream>
using namespace std;

class Sample {
    int* data;

public:
    Sample(int val = 0) {
        data = new int;
        *data = val;
    }

    Sample& operator=(const Sample& s) {
        if (this != &s) {
            delete data;
            data = new int(*s.data);
        }
        return *this;
    }

    void show() { cout << "Value: " << *data << endl; }
};

int main() {
    Sample a(10), b;
    b = a;
    a.show();
    b.show();
    return 0;
}
