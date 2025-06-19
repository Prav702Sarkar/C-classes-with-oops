#include <iostream>
using namespace std;

class Sum{
    int n;
    int sum = 0;
    public:
    Sum(int sum){
        n=sum;
    }

    void isProcess(){
        for(int i=1; i<n; i++){
            sum+=i;
        }
    }

    void display(){
        isProcess();
        cout<<"Sum of "<<n<<" natural numbers are = "<<sum<<endl;
    }
};

int main(){
    int num;
    cout<<"Enter a number= ";
    cin>>num;
    Sum s(num);
    s.display();
    return 0;
}