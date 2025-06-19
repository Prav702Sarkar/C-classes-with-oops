#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number of elements in array= "<<endl;
    cin>>n;

    if(n<=0){
        cout<<"Invalid input. Please enter a positive integer."<<endl;
        return 1;
    }

int arr[n];
cout<<"Enter the elements= "<<endl;

for(int i=0; i<n; i++){
    cin>>arr[i];
}

int sum=0;
for(int i=0; i<n; i++){
    sum+=arr[i];
}
cout<<"The sum of all elements in array= "<<sum<<endl;
return 0;
}