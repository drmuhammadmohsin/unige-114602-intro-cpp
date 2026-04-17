#include <iostream>
using namespace std;

int main() {
    double km;
    cout << "Enter the number of kilometers traveled: ";
    cin >> km;

    double fare = 5; // Base fare

    if (km <= 10) {
        fare += km * 2; // 2 € per km for the first 10 km
    } else {
        fare += 10 * 2; // Cost for first 10 km
        fare += (km - 10) * 1.5; // Cost for additional km
    }

    cout << "Total fare: " << fare << " €" << endl;

    return 0;
}
