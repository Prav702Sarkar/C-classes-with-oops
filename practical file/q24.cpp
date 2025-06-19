#include <iostream>
using namespace std;

class Test {
public:
    int marks1, marks2;
    void getTestData() {
        cout << "Enter marks for two subjects: ";
        cin >> marks1 >> marks2;
    }
    void showTestData() {
        cout << "Marks in Subject 1: " << marks1 << "\nMarks in Subject 2: " << marks2 << endl;
    }
};

class Sports {
public:
    int score;
    void getSportsData() {
        cout << "Enter sports score: ";
        cin >> score;
    }
    void showSportsData() {
        cout << "Sports Score: " << score << endl;
    }
};

class Result : public Test, public Sports {
public:
    void getData() {
        getTestData();
        getSportsData();
    }
    void showData() {
        showTestData();
        showSportsData();
        cout << "Total Score (Test + Sports): " << marks1 + marks2 + score << endl;
    }
};

int main() {
    Result r;
    r.getData();
    cout << "\nResult Details:\n";
    r.showData();
    return 0;
}
