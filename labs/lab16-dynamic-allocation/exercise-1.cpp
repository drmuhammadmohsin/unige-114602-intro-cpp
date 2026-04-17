#include <iostream>
using namespace std;

int main() {
    int capacity;

    // Get initial capacity from user
    cout << "Enter initial array capacity: ";
    cin >> capacity;

    // Dynamically allocate initial array
    int* arr = new int[capacity];
    int size = 0;

    cout << "\nEnter integers to insert (-1 to stop):\n";

    int value;
    while (true) {
        cout << "Enter value: ";
        cin >> value;

        if (value == -1)
            break;

        // Check if array is full — if so, double the capacity
        if (size == capacity) {
            int newCapacity = capacity * 2;
            cout << "\n  Array full (capacity = " << capacity << ")"
                 << " Doubling to capacity = " << newCapacity << "\n\n";

            // Step 1: Allocate new larger array
            int* newArr = new int[newCapacity];

            // Step 2: Copy all existing elements into new array
            for (int i = 0; i < size; i++)
                newArr[i] = arr[i];

            // Step 3: Delete old array
            delete[] arr;

            // Step 4: Point to new array and update capacity
            arr      = newArr;
            capacity = newCapacity;
        }

        // Insert value into array
        arr[size++] = value;
    }

    // Print final array
    cout << "\n Final array (size = " << size
         << ", capacity = " << capacity << "):\n[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "]\n";

    // Free allocated memory
    delete[] arr;

    return 0;
}