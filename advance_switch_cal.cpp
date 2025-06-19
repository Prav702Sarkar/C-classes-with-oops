#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("cls");
    int num1,num2,ch;
    cout<<"--------------Advanced Calculator-------------";
    while(ch!=4){
    cout<<"\n1. Factorial\n2. Power\n3. Square root\n4. Exit";
    cout<<"\nSelect your choice from 1 to 4 = ";
    cin>>ch;
        switch(ch){
            case 1:{
            cout<<"Enter the number= ";
            cin>>num1;
            int fact=1;
            for(int i=1;i<=num1;i++){
                fact*=i;
            }
            cout<<"\nFactorial of "<<num1<<" is "<<fact<<endl;
            break;
        }

            case 2:{
            cout<<"Enter the base number= ";
            cin>>num1;
            cout<<"Enter the exponent number= ";
            cin>>num2;
            cout<<"Result= "<<pow(num1,num2)<<endl;
            break;
        }

            case 3:{
            cout<<"Enter the number= ";
            cin>>num1;
            cout<<"Square root= "<<sqrt(num1)<<endl;
            break;
        }

            case 4:{
            cout<<"Exiting...";
            break;
        }
            default:{
                cout<<"Invalid choice. Please try again."<<endl;
            }
        }
    }
    return 0;
}