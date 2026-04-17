#include <iostream>

using namespace std;
int main(){


int* a = NULL;   // Pointer to int, initialize to nothing.
int n;     
cout<<"Enter the size of the array: ";
cin >> n;        // Read in the size
a = new int[n];  // Allocate n ints and save ptr in a.
for (int i=0; i<n; i++) {
    cout<<"Enter element "<<i+1<<": ";
    cin >> a[i];  // Use array as normal.
}

delete [] a;  // When done, free memory pointed to by a.
a = NULL;     // Clear a to prevent using invalid memory reference.

return 0;
}