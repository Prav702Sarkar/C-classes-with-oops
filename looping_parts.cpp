#include <iostream>
using namespace std;

int main(){
    int i=5,n=5;
    // for(i; i<5; i++){
    //     cout<<"Shoolini"<<endl;  //it is used when the iteration is known.
    // }

    while(i<n){
        cout<<"tax!"<<endl; //it is used when the iteration is unknown.
        i++; //if the i++ is outside the loop then it becomes an infinite loop
    }
    return 0;

    do{
        cout<<"Tax!"<<endl; //it is used when the iteration is unknown.
        i++;
    }
    while(i<5);  // execution of the statement without checking the condition.

    return 0;
}