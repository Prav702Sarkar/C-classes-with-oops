#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    system("cls");
    cout<<"Press Enter to roll the dice...";
    cin.get();

    srand(time(0));
    cout<<"Random Number= "<< rand() % 6 + 1 <<endl;
    return 0;
}