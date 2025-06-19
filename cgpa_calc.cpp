#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of subjects= ";
    cin>>n;

    float grade,sum=0.0;
    for(int i=1;i<=n;i++){
        cout<<"Enter the grade point for the subject "<<i<<": ";
        cin>> grade;
        sum+=grade;
    }

    float cgpa=sum/n;
    cout<<"Your CGPA is: "<<cgpa<<endl;
    return 0;
}