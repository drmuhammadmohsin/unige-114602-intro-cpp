#include <iostream> // Header file for input/output stream
using namespace std; // Using the standard namespace

// Function to count occurrences of a specific number 'x' in an array 'arr' of size 'n'
int count_occurrences(int arr[], int n, int x)
{
    int result = 0; // Variable to store the count of occurrences

    // Loop through each element in the array
    for (int i = 0; i < n; i++)
    {
        // Check if the current element is equal to 'x'
        if (x == arr[i])
            result++; // Increment the count if the element matches 'x'
    }
    return result; // Return the total count of occurrences
}

int main()
{
    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; // Declaration and initialization of an integer array
    int n = sizeof(nums) / sizeof(nums[0]); // Calculate the number of elements in the array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) 
    cout << nums[i] << " "; // Output each element of the original array

    int x = 7; // The number to count occurrences of
    cout << "\nNumber of occurrences of 7 : " << count_occurrences(nums, n, x); // Call function to count occurrences of 'x'
    return 0; // Return 0 to indicate successful execution
}
