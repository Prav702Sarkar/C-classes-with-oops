#include <iostream>
using namespace std;

class BankAccount{
    string ah;
    int an;
    double b;

    public:
    BankAccount(){
        ah = "unknown";
        an = 0;
        b = 0.0;
    }

    BankAccount(string accountHolder, int accountNumber, double balance){
        this->ah=accountHolder;
        this->an=accountNumber;
        this->b=balance;
    }

    void deposit(double amount){
        if(amount>0){
            b+=amount;
            cout<<"Deposited: "<<amount<<endl;
        }
        else{
            cout<<"Invalid deposit amount"<<endl;
        }
    }

    void withdraw(double amount){
        if(amount>0 && amount<=b){
            b-=amount;
            cout<<"Withdrawn: "<<amount<<endl;
        }
        else{
            cout<<"Invalid withdrawal amount"<<endl;
        }
    }

    void display(){
        cout<<"Account Holder: "<<ah<<endl;
        cout<<"Account Number: "<<an<<endl;
        cout<<"Balance: "<<b<<endl;
    }
};

int main(){
    system("cls");
    string name;
    int accno;
    double bal;

    cout<<"Enter account holder name: ";
    cin>>name;
    cout<<"Enter account number: ";
    cin>>accno;
    cout<<"Enter initial balance: ";
    cin>>bal;

    BankAccount acc(name, accno, bal);
    acc.display();
    acc.deposit(1000);
    acc.display();
    acc.withdraw(200);
    acc.display();

    return 0;
}