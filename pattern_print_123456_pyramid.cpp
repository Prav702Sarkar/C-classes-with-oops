#include <iostream>
using namespace std;

int main(){
    int r,num=1;
    cout<<"Enter the number of rows= ";
    cin >> r;

    for(int i=1;i<=r;i++){
        for(int j=1;j<=r-i;j++){
            cout<<" ";
        }

        for(int k=1;k<=i;k++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}

