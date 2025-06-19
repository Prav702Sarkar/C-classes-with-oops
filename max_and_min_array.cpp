#include <iostream>
using namespace std;

int main() {
    system("cls");
    int arr[] = {10, 25, 8, 42, 15}; // Predefined array
    int maxNum = arr[0]; // Assume first element is max
    int minNum = arr[0]; // Assume first element is min

    // Loop to find the maximum and minimum number
    for (int i = 1; i < 5; i++) { // Directly using array size (5 elements)
        if (arr[i] > maxNum) {
            maxNum = arr[i]; // Update max if current element is greater
        }
        else if (arr[i] < minNum) {
            minNum = arr[i]; // Update min if current element is smaller
        }
    }

    // Output the results
    cout << "Maximum number: " << maxNum << endl;
    cout << "Minimum number: " << minNum << endl;

    return 0;
}
