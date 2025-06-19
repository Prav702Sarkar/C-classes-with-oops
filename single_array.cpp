#include <iostream>
using namespace std;

int curr_size = 0;

bool isFull(int *arr, int size) {
    return curr_size == size;
}

bool isEmpty(int *arr, int size) {
    return curr_size == 0;
}

void print(int *arr, int size) {
    cout << "\nElements are: ";
    for (int i = 0; i < curr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void insertAtBeginning(int *arr, int size, int value) {
    if (isFull(arr, size)) { 
        cout << "Queue is full" << endl;
        return;
    }
    for (int i = curr_size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    curr_size++;
}

int main() {
    int size;
    cout << "Enter the size: ";
    cin >> size;

    int *arr = new int[size];

    delete[] arr;
    return 0;
}
