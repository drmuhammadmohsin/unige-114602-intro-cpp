#include <iostream>
#include <string>

using namespace std;

/**
 * Exercise 3: Dynamic String Array (Lecture 16, Slide 68)
 * 
 * Objective: Allocate an array of strings based on user input.
 */
int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    // 1. DYNAMICALLY ALLOCATE AN ARRAY OF STRINGS
    // TODO: string* arr = ...
    string* arr = nullptr;

    if (arr != nullptr) {
        // 2. INPUT STRINGS
        for (int i = 0; i < n; i++) {
            cout << "String " << i + 1 << ": ";
            // TODO: cin >> arr[i];
        }

        // 3. OUTPUT STRINGS ALONG WITH INDICES
        cout << "\nOutput:" << endl;
        // TODO: Loop through and print e.g., "[0]: Hello"
        
        // 4. DEALLOCATE
        // TODO: delete[] ...
    } else {
        cout << "Array not allocated!" << endl;
    }

    return 0;
}
