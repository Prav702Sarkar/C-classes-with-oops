#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<<"Factors are: ";

    for(int i=1; i<n; i++){
        if(n%i==0){
            cout<< i << " ";
        }
    }
    cout<<n<<endl;
    return 0;
}