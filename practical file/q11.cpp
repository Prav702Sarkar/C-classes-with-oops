#include <iostream>
using namespace std;

class Max{
    int a,b,c,d;

    public:
    int max(int a,int b){
        if(a>b){
            return a;
        }
        else{
            return b;
        }
    }

    int max(int a,int b,int c){
        return max(max(a,b),c);
    }

    int max(int a,int b,int c,int d){
        return max(max(a,b),max(c,d));
    }
};

int main(){
    int a,b,c,d;

    cout<<"Enter the 1st number= ";
    cin>>a;
    cout<<"Enter the 2nd number= ";
    cin>>b;
    cout<<"Enter the 3rd number= ";
    cin>>c;
    cout<<"Enter the 4th number= ";
    cin>>d;

    Max m;
    cout<<"The maximum number is "<<m.max(a,b,c,d)<<endl;
}