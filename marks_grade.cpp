#include <iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter the marks: ";
    cin>>m;

    if(m>90){
        cout<<"Graded A";
    }
    else if(m>70){
        cout<<"Graded B";
    }
    else if(m>=40){
        cout<<"Graded C";
    }
    else{
        cout<<"Graded F";
    }
    return 0;
}