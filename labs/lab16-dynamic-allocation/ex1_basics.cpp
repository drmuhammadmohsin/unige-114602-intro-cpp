#include <iostream>

using namespace std;

int main() {
    // 1. DYNAMICALLY ALLOCATE A SINGLE INTEGER
    // Hint: int* pInt = new int;
    int* pInt = nullptr; 
    
    // 2. ASSIGN A VALUE TO IT AND PRINT IT
    // TODO: Your code here
    
    // 3. DYNAMICALLY ALLOCATE A DOUBLE
    // TODO: Your code here
    
    // 4. REQUEST THE SIZE OF AN ARRAY FROM THE USER
    int n;
    cout << "Enter the number of elements for the array: ";
    cin >> n;

    // 5. DYNAMICALLY ALLOCATE AN INTEGER ARRAY OF SIZE 'n'
    // Hint: int* arr = new int[n];
    int* arr = nullptr;
    
    // 6. FILL THE ARRAY WITH MULTIPLES OF 5 (5, 10, 15...)
    // TODO: Your code here
    
    // 7. PRINT THE ARRAY
    // TODO: Your code here
    
    // 8. DEALLOCATE ALL MEMORY
    // Hint: Use delete and delete[]
    // TODO: Your code here
    
    cout << "\nMemory deallocated successfully." << endl;

    return 0;
}
