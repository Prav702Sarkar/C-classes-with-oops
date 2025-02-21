#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;
    int n, fact;
    
    do {
        system("cls");
        cout << "===Advance Calculator===\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Modulus\n";
        cout << "6. Power\n";
        cout << "7. Square Root\n";
        cout << "8. Factorial\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            
            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;
            
            case 5: // Modulus
                cout << "Enter two integers: ";
                int int1, int2;
                cin >> int1 >> int2;
                if (int2 != 0) {
                    result = int1 % int2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl;
                }
                break;

            case 6: // Power
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 7: // Square root
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Cannot calculate square root of a negative number." << endl;
                }
                break;

            case 8: // Factorial
                cout << "Enter a number: ";
                cin >> n;
                if (n < 0) {
                    cout << "Error: Factorial is not defined for negative numbers." << endl;
                } else {
                    fact = 1;
                    for (int i = 1; i <= n; i++) {
                        fact *= i;
                    }
                    cout << "Result: " << fact << endl;
                }
                break;

            case 9:
                cout << "Exiting the program..." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        if (choice != 9) {
            cout << "Press enter to continue...";
            cin.ignore();
            cin.get();
        }
    } while (choice != 9);

    return 0;
}