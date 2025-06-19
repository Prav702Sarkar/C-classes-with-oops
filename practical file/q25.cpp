#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;
    void getVehicleData() {
        cout << "Enter vehicle brand: ";
        cin >> brand;
        cout << "Enter vehicle speed: ";
        cin >> speed;
    }
    void showVehicleData() {
        cout << "Brand: " << brand << "\nSpeed: " << speed << " km/h" << endl;
    }
};

class Car : public Vehicle {
public:
    int doors;
    void getCarData() {
        getVehicleData();
        cout << "Enter number of doors: ";
        cin >> doors;
    }
    void showCarData() {
        showVehicleData();
        cout << "Number of doors: " << doors << endl;
    }
};

class Bike : public Vehicle {
public:
    bool hasCarrier;
    void getBikeData() {
        getVehicleData();
        cout << "Does the bike have a carrier (1 for Yes, 0 for No): ";
        cin >> hasCarrier;
    }
    void showBikeData() {
        showVehicleData();
        cout << "Has Carrier: " << (hasCarrier ? "Yes" : "No") << endl;
    }
};

int main() {
    Car c;
    Bike b;
    cout << "--- Car Details ---\n";
    c.getCarData();
    c.showCarData();
    cout << "\n--- Bike Details ---\n";
    b.getBikeData();
    b.showBikeData();
    return 0;
}
