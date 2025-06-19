#include <iostream>
using namespace std;

int main(){
    system("cls");
    int n,sum=0;
    cout << "Enter a natural number= ";
    cin >> n;

    for(int i=1; i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;

    cout << "Odd numbers in reverse order: ";

    for(int i=n;i>=1;i--){
        if(i%2!=0){
            cout << " " << i;
        }
    }
    return 0;
}