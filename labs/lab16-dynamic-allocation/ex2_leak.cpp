#include <iostream>

using namespace std;

/**
 * Exercise 2: Memory Leak (Lecture 16, Slides 41-43)
 * 
 * Objective: Use a counter strategy to detect if memory is leaked.
 */
int main() {
    int counter = 0; // Tracks active memory allocations

    // 1. ALLOCATE TWO INTEGERS
    int* p1 = new int(100);
    counter++; // Increment for p1
    
    int* p2 = new int(200);
    counter++; // Increment for p2

    cout << "Allocated p1 and p2. Current active allocations: " << counter << endl;

    // 2. DELETE ONLY p1
    delete p1;
    counter--;
    
    // 3. OBSERVE THE LEAK
    // TODO: We "forgot" to delete p2
    
    if (counter != 0) {
        cout << "\nWARNING: Memory Leak Detected!" << endl;
        cout << "Allocations not freed: " << counter << endl;
    } else {
        cout << "\nMemory cleaned up successfully!" << endl;
    }

    // TODO: Fix the leak by deleting p2 and updating the counter
    
    return 0;
}
