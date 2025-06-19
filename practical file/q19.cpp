#include <iostream>
using namespace std;

class Matrix {
public:
    int data[2][2];
    Matrix operator*(const Matrix &other) {
        Matrix result;
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                result.data[i][j] = data[i][0] * other.data[0][j] + data[i][1] * other.data[1][j];
        return result;
    }
    void input() {
        for (int i = 0; i < 2; ++i)
            for (int j = 0; j < 2; ++j)
                cin >> data[i][j];
    }
    void display() const {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j)
                cout << data[i][j] << " ";
            cout << endl;
        }
    }
};

int main() {
    Matrix mat1, mat2;
    cout << "Enter elements of 2x2 matrix 1:" << endl;
    mat1.input();
    cout << "Enter elements of 2x2 matrix 2:" << endl;
    mat2.input();

    Matrix result = mat1 * mat2;
    cout << "Resultant matrix:" << endl;
    result.display();

    return 0;
}