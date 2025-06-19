#include <iostream>
using namespace std;

class Rectangle{
    private:
    int l,b;

    public:
    void setDimensions(int l, int b){
        this->l = l;
        this->b = b;
    }

    int area(){
        return l*b;
    }

    void display(){
        cout<<"Area: "<<area();
    }
};

int main(){
    int l,b;

    cout<<"Enter the length= ";
    cin>>l;
    cout<<"Enter the breadth= ";
    cin>>b;

    Rectangle r;
    r.setDimensions(l,b);
    r.display();
}