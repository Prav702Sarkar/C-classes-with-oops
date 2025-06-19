#include <iostream>
using namespace std;

class Sample {
private:
    int* data;

public:
    // Constructor
    Sample(int val) {
        data = new int;
        *data = val;
    }

    // Copy Constructor (Shallow Copy)
    Sample(const Sample& obj) {
        data = obj.data;  // Just copy the pointer (shallow copy)
        cout << "Shallow Copy Constructor called.\n";
    }

    // Deep Copy Constructor
    Sample deepCopy() const {
        Sample copy(0);
        *copy.data = *data;  // Allocate new memory and copy value
        cout << "Deep Copy created.\n";
        return copy;
    }

    // Setter
    void setValue(int val) {
        *data = val;
    }

    // Getter
    int getValue() const {
        return *data;
    }
};

int main() {
    Sample original(10);
    Sample shallowCopy = original; // Shallow copy
    Sample deepCopy = original.deepCopy(); // Deep copy

    // Modify original
    original.setValue(99);

    cout << "\nOriginal: " << original.getValue() << endl;
    cout << "Shallow Copy: " << shallowCopy.getValue() << endl; // Affected
    cout << "Deep Copy: " << deepCopy.getValue() << endl;       // Unaffected

    return 0;
}
