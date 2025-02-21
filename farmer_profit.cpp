#include <iostream>
using namespace std;

int main() {
    float a,o,m,ar,mr,o_r,cp,sp,km,pkm,tkm,p;
    a=20;
    o=20;
    m=10;
    ar=5.56;
    mr=4.23;
    o_r=7.85;
    cp=a*ar+o*o_r+m*mr;
    cout<<"The total cost price= "<<cp<<endl;

    km=5;
    pkm=2;
    tkm=km+pkm;
    cout<<"Total kilometers traveled= "<<tkm<<endl;

    p=cp*10/100;
    sp=p+cp;
    cout<<"Total profit gain= Rs."<<sp<<endl;

    return 0;
}