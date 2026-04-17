#include <iostream>
#include <iomanip>

using namespace std;

/**
 * Exercise 4: 2D Dynamic Matrices (Lecture 16, Slides 63-67)
 * 
 * Objective: Step-by-step allocation and deallocation of a 2D matrix.
 */
int main() {
    int rows, cols;
    cout << "Enter Rows: ";
    cin >> rows;
    cout << "Enter Cols: ";
    cin >> cols;

    // 1. ALLOCATE THE ARRAY OF POINTERS (Lecture 16, Slide 63)
    // TODO: int** m = new int*[rows];
    int** m = nullptr;

    if (m != nullptr) {
        // 2. FOR EACH ROW, ALLOCATE THE COLUMN ARRAY (Lecture 16, Slide 66)
        // TODO: for loop here...

        // 3. INITIALIZATION (Lecture 16, Slide 67)
        // m[i][j] = i + j
        // TODO: nested loops here...

        // 4. PRINT THE MATRIX
        cout << "\nMatrix Result:\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                // cout << setw(4) << m[i][j];
            }
            cout << endl;
        }

        // 5. DEALLOCATION (Lecture 16, Slide 67)
        // Deallocate each row, then the pointers array
        // TODO: deallocation logic here...
        
        cout << "\nMatrix deallocated successfully." << endl;
    } else {
        cout << "Step 1: Allocation failed." << endl;
    }

    return 0;
}
