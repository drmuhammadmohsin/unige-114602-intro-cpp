#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    // Reading input values
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    
    // Calculate min and max using ternary operators
    int minVal = (a < b && a < c) ? a : (b < c) ? b : c;
    int maxVal = (a > b && a > c) ? a : (b > c) ? b : c;

    // Calculate the middle value using ternary operators
    int midVal = (a != minVal && a != maxVal) ? a : 
                 (b != minVal && b != maxVal) ? b : c;

    // Print in ascending order
    cout << "The numbers in ascending order are: " << minVal << ", " << midVal << ", " << maxVal << endl;

    return 0;
}


