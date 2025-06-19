#include <iostream>
using namespace std;

class Book{
    string b;

    public:
    Book(string book){
        this->b=book;
        cout<<book<<endl;
    }

    Book(){
        cout<<"No books are available.";
    }
};

int main(){
    system("cls");
    Book b1("Harry Potter");
    Book b2;
    return 0;
}