#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 8, 42, 15}; // Predefined array
    int maxNum = arr[0]; // Assume first element is max

    // Loop to find the maximum number
    for (int i = 1; i < 5; i++) { // Directly using array size (5 elements)
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }

    cout << "Maximum number: " << maxNum << endl;

    return 0;
}
