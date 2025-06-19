#include <iostream>
#include <cctype>
using namespace std;

int main() {
    system("cls"); 
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);
    
    if (isalpha(ch)) {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            cout << ch << " is a vowel.";
        }
        else{
            cout << ch << " is a consonant.";
        }
    }
    else {
        cout<<"Enter a valid character!";
    }

    return 0;
}