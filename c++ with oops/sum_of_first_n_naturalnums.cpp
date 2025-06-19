#include <iostream>
using namespace std;

int main(){
    int n,sum;
    cout<<"Enter the n natural number= ";
    cin>>n;

    sum=0;

    for(int i=1;i<=n;i++){
        sum+=i;
    }

    cout<<"Sum of the first "<<n<<" natural numbers= "<<sum<<endl;

    return 0;

}