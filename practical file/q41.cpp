#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static data member

public:
    static void increment() {
        count++;
    }

    static void showCount() {
        cout << "Count: " << count << endl;
    }
};

// Definition and initialization of static member
int Counter::count = 0;

int main() {
    Counter::increment();
    Counter::increment();
    Counter::showCount(); // Output: Count: 2

    return 0;
}
