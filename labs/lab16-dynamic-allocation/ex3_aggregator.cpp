#include <iostream>

using namespace std;

// Requirement: Re-use your logic from Ex 2 here
int* growArray(int* arr, int currentSize, int& capacity) {
    int newCapacity = capacity * 2;
    int* newArr = new int[newCapacity];
    
    // TODO: Copy elements
    // TODO: Delete old array
    
    capacity = newCapacity;
    return newArr;
}

int main() {
    int capacity = 2;
    int size = 0;
    int* data = new int[capacity];

    cout << "Enter numbers (0 to stop):" << endl;
    int input;
    while (cin >> input && input != 0) {
        // TODO: Check if full, and if so, GROW the array using growArray()
        
        // TODO: Store the input and increment size
    }

    // TODO: Calculate SUM and AVERAGE
    
    // TODO: Print results
    // Example: Total Elements: 10, Sum: 50, Average: 5.0

    // TODO: Clean up
    delete[] data;

    return 0;
}
