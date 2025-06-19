#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<j;
        }
        cout<<endl;
    }

    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}
