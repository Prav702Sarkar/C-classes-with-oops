#include <iostream>
using namespace std;

class atm{
public:
    int ch; 
    double cb;
    double md, wd;
    
    atm(){
        cb = 0.0;
    }

    void performOperations(){
        do{ 
            cout << "\nEnter your choice: ";
            cin >> ch;
        
            switch(ch){
        
                case 1:
                    cout << "Your current balance is: " << cb;
                    break;
        
                case 2:
                cout << "Enter the amount to deposit: ";
                    cin >> md;
                    if(md > 0){
                        cb += md;
                    cout << "Your updated balance is: " << cb;
                    }
                    else{
                        cout << "Invalid deposit amount!";
                    }
                    break;
        
                case 3:
                    cout << "Enter the amount to withdraw: ";
                    cin >> wd;
                    if(wd > 0 && wd <= cb){
                        cb -= wd;
                        cout << "Your updated balance is: " << cb;
                    }
                    else if(wd > cb){
                        cout << "Insufficient balance!";
                    }
                    else{
                        cout << "Invalid withdrawal amount!";
                    }  
                    break;
        
                case 4:
                    cout << "Thank you for using our ATM!";
                    break;
        
                default:
                    cout << "Invalid choice!";
                    cout << "\nPress enter to continue...";
                    cin.ignore();
                    cin.get();
            }
        } while(ch!=4);
    }
};
int main(){
    system("cls");

    
    atm atm1;
    cout << "-----------ATM-----------";
    cout << "\nEnter the amount for the initialization: ";
    cin >> atm1.cb;
    cout << "\n1. Check Balance\n2. Money Deposit\n3. Withdraw Money\n4. Exit\n";
    atm1.performOperations();

    return 0;
}