#include <iostream>

using namespace std;

/**
 * Exercise 1: Dangling Pointers (Lecture 16, Slide 32)
 * 
 * Objective: Understand undefined behavior when accessing deallocated memory.
 */
int main() {
    // 1. DYNAMICALLY ALLOCATE AN INTEGER
    int* ptr = new int(42);
    
    cout << "Original Value: " << *ptr << endl;
    cout << "Pointer Address: " << ptr << endl;

    // 2. DEALLOCATE THE MEMORY
    // TODO: Write the delete statement
    
    cout << "\n--- AFTER DELETE ---" << endl;
    
    // 3. TRY TO ACCESS THE VALUE
    // Note: This is UNSAFE and leads to undefined behavior!
    // TODO: Uncomment the line below to test (and then fix it in the solution)
    // cout << "Dangling Value: " << *ptr << endl;
    
    cout << "Memory has been released, but 'ptr' still points to: " << ptr << endl;

    // 4. FIX THE DANGLING POINTER
    // Hint: Slide 31 suggests setting it to nullptr
    // TODO: ptr = ...
    
    return 0;
}
