#include <iostream>
using namespace std;

// Function to count occurrences of a target number in an array
int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

// Function to print the array
void printArray(int arr[], int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int size;
    
    // Get array size from user
    cout << "Enter the number of elements in the array: ";
    cin >> size;
    
    // Create array
    int arr[size];
    
    // Get array elements from user
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Display the array
    cout << "Array: ";
    printArray(arr, size);
    
    // Get the number to search for
    int target;
    cout << "Enter the number to count occurrences of: ";
    cin >> target;
    
    // Count occurrences
    int occurrences = countOccurrences(arr, size, target);
    
    // Display result
    cout << "The number " << target << " appears " << occurrences 
         << " time" << (occurrences != 1 ? "s" : "") << " in the array." << endl;
    
    return 0;
}