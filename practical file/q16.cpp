#include <iostream>
using namespace std;

class Array {
    int* data;
    int size;

public:
    Array(int s) {
        size = s;
        data = new int[size];
    }

    int& operator[](int index) {
        return data[index];
    }
};

int main() {
    Array arr(5);

    for (int i = 0; i < 5; ++i){
        arr[i] = i * 10;}

    for (int i = 0; i < 5; ++i){
        cout << arr[i] << " ";}

    cout << endl;
    return 0;
}
