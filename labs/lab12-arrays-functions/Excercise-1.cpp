#include <iostream>
using namespace std;

// Function to search for an element in the array
int searchElement(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return index
        }
    }
    return -1; // Element not found, return -1
}

int main() {
    int size, target;

    // Input array size
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    // Input array elements
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Input target element to search
    cout << "Enter the element to search for: ";
    cin >> target;

    // Call the search function
    int result = searchElement(arr, size, target);

    // Display the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}


