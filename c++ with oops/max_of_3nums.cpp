#include <iostream>
using namespace std;

int main(){
    int a,b,c,max;
    cout<<"Enter the 1st number= ";
    cin>>a;

    cout<<"Enter the 2nd number= ";
    cin>>b;

    cout<<"Enter the 3rd number= ";
    cin>>c;

    max=a;
    if(b>max){
        max=b;   
    }
    else if(c>max){
        max=c;  
    }

    cout<<"The maximum numbers amoung the three= "<<max<<endl;

    return 0;
}