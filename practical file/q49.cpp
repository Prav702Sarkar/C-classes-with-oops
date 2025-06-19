#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;  // Static pointer to the single instance

    // Private constructor to prevent direct creation
    Singleton() {
        cout << "Singleton instance created." << endl;
    }

public:
    // Static method to access the single instance
    static Singleton* getInstance() {
        if (instance == nullptr)
            instance = new Singleton();
        return instance;
    }

    void showMessage() {
        cout << "Hello from Singleton!" << endl;
    }
};

// Initialize static member
Singleton* Singleton::instance = nullptr;

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->showMessage();

    // Check if both pointers point to the same instance
    if (s1 == s2)
        cout << "Both are the same instance." << endl;

    return 0;
}
