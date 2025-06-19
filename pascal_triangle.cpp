#include <iostream>
using namespace std;

int main() {
    int r;
    cout << "Enter the number of rows: ";
    cin >> r;

    for (int i = 0; i < r; i++) {
        // Print spaces for alignment
        for (int j = 0; j < r - i - 1; j++) {
            cout << " ";
        }

        int num = 1;
        for (int k = 0; k <= i; k++) {
            cout << num << " ";
            num = num * (i - k) / (k + 1); // Formula for Pascal's triangle
        }

        cout << endl;
    }

    return 0;
}
