#include <iostream>
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    Book(string t, int p) : title(t), pages(p) {}

    // Const member function - cannot modify any member variables
    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }

    // Non-const function - can modify members
    void updatePages(int p) {
        pages = p;
    }
};

int main() {
    Book b("C++ Basics", 100);
    b.display();          // Allowed
    b.updatePages(120);   // Modify value
    b.display();          // Check updated value

    return 0;
}
