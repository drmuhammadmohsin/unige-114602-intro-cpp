// #include <iostream>
// using namespace std;

// // Function to compute the sum of the array
// int sum(int arr[], int size) {
//     int total = 0;
//     for (int i = 0; i < size; ++i) {
//         total += arr[i];
//     }
//     return total;
// }

// // Function to print the array
// void print(int arr[], int size) {
//     cout << "{";
//     for (int i = 0; i < size; ++i) {
//         cout << arr[i];
//         if (i < size - 1) {
//             cout << ",";
//         }
//     }
//     cout << "}" << endl;
// }

// int main() {
//     int size;

//     cout << "Enter number of elements: ";
//     cin >> size;

//     int arr[size];  // array of given size (for simple exercise purposes)

//     cout << "Enter " << size << " integers:" << endl;
//     for (int i = 0; i < size; ++i) {
//         cin >> arr[i];
//     }

//     print(arr, size);

//     int result = sum(arr, size);
//     cout << "sum is " << result << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

// Function to calculate the sum of array elements
int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Function to print the array in the specified format
void print(int arr[], int size) {
    cout << "{";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << ",";
        }
    }
    cout << "}" << endl;
}

int main() {
    int size;
    
    // Ask user for the number of elements
    cout << "How many elements does the array have? ";
    cin >> size;
    
    // Create array with the specified size
    int arr[size];
    
    // Ask user to enter the elements
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Print the array
    cout << "Array: ";
    print(arr, size);
    
    // Calculate and display the sum
    int total = sum(arr, size);
    cout << "Sum of array elements: " << total << endl;
    
    return 0;
}