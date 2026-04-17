#include <iostream>

using namespace std;

/**
 * Exercise 5: Dynamic Array Resizing (Lecture 16, Slides 58-59)
 * 
 * Objective: Implement a function to grow an array when it is full.
 */

/**
 * Grows an array by creating a larger one and copying data.
 * Returns the new pointer.
 */
int* grow(int* oldArr, int oldSize, int newCapacity) {
    // 1. ALLOCATE NEW BIGGER ARRAY
    // 2. DEEP COPY ELEMENTS
    // 3. DELETE OLD ARRAY
    // 4. RETURN NEW POINTER
    return nullptr; // TODO: Implement
}

int main() {
    int capacity = 2;
    int size = 0;
    int* data = new int[capacity];

    cout << "Reading 5 numbers into an array of initial capacity 2..." << endl;
    for (int i = 0; i < 5; i++) {
        if (size == capacity) {
            cout << "... Growing from " << capacity << " to " << capacity * 2 << endl;
            data = grow(data, size, capacity * 2);
            capacity *= 2;
        }
        data[size] = (i + 1) * 10;
        size++;
    }

    cout << "\nFinal Contents: ";
    for (int i = 0; i < size; i++) cout << data[i] << " ";
    cout << "\nFinal Capacity: " << capacity << endl;

    delete[] data;
    return 0;
}
