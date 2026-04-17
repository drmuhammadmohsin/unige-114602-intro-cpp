#include<iostream>
using namespace std;

int totalDigits(int num) {
    // Handle negative numbers
    if (num < 0) {
        num = -num;  // Make it positive
    }
    
    // Handle 0 separately
    if (num == 0) {
        return 1;
    }
    
    int count = 0;
    while (num > 0) {
        num = num / 10;  // Remove last digit
        count++;         // Increment counter
    }
    
    return count;
}

int main() {
   
    cout << "Number 12345 has " << totalDigits(12345) << " digits" << endl;
    cout << "Number -987 has " << totalDigits(-987) << " digits" << endl;
    cout << "Number 0 has " << totalDigits(0) << " digits" << endl;
    cout << "Number 7 has " << totalDigits(7) << " digits" << endl;
    
    return 0;
}
