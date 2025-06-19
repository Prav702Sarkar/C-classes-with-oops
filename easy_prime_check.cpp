#include <iostream>
using namespace std;

int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;  
}

int main(){
    system("cls");
    int n;
    cout<<"Enter a number= ";
    cin>>n;

    if(n<1){
        cout<<n<<" is not a prime number.";
    }
    else if(n==1){
        cout<<n<<" is a prime number";
    }
    else if(prime(n)){
        cout<<n<<" is a prime number.";
    }
    else{
        cout<<n<<" is not a prime number.";
    }

    return 0;
}