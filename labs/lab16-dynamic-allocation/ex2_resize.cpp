#include <iostream>

using namespace std;

/**
 * Task: Implement this function
 * It should:
 * 1. Allocate a new array of 'newSize'
 * 2. Copy elements from 'arr' to the new array
 * 3. Delete the old 'arr'
 * 4. Return the pointer to the new array
 */
int* resizeArray(int* arr, int currentSize, int newSize) {
    // TODO: Implement resizing logic
    return nullptr; // Placeholder
}

int main() {
    int currentSize = 3;
    int* myArray = new int[currentSize];

    // Initial fill
    for (int i = 0; i < currentSize; i++) {
        myArray[i] = (i + 1) * 10;
    }

    cout << "Original array: ";
    for (int i = 0; i < currentSize; i++) cout << myArray[i] << " ";
    cout << endl;

    // Resize to 6
    int newSize = 6;
    myArray = resizeArray(myArray, currentSize, newSize);

    // Fill new slots
    if (myArray != nullptr) {
        for (int i = currentSize; i < newSize; i++) {
            myArray[i] = (i + 1) * 10;
        }

        cout << "Resized array: ";
        for (int i = 0; i < newSize; i++) cout << myArray[i] << " ";
        cout << endl;

        // Final cleanup
        delete[] myArray;
    } else {
        cout << "Error: resizeArray implementation missing!" << endl;
    }

    return 0;
}
