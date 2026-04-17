#include <iostream>
using namespace std;
int main() {

    int arr[] = {20, 30, 50, 80, 90};
    int * p =nullptr;
    p = arr;
    p = p + 1;
    *p = *p + 1;
    cout<<p<<endl;
    cout<<*p<<endl;


// int value = 42; // An int variable with a value
// int *pValue = &value; // Declare a pointer variable called pValue pointing to an int and initialize it to the address of value
// cout << "Value of value: " << value << endl; // Output the value of value
// cout << "Address of value: " << &value << endl; // Output the address of value
// cout << "Value of pValue: " << pValue << endl; // Output the value of pValue (which is the address of value)
// cout << "Value pointed to by pValue: " << *pValue << endl; // Output the value pointed to by pValue (which is the value of value)


// int number = 88;     // An int variable with a value
// int * pNumber;       // Declare a pointer variable called pNumber pointing to an int (or int pointer)
// pNumber = &number;   // Assign the address of the variable number to pointer pNumber
 
// int * pAnother = &number; // Declare another int pointer and init to address of the variable number

// cout << "Value of number: " << number << endl; // Output the value of number
// cout << "Address of number: " << &number << endl; // Output the address of
// cout << "Value of pNumber: " << pNumber << endl; // Output the value of pNumber (which is the address of number)
// cout << "Value pointed to by pNumber: " << *pNumber << endl; // Output the value pointed to by pNumber (which is the value of number)
// cout << "Value of pAnother: " << pAnother << endl; // Output the value
// cout << "Value pointed to by pAnother: " << *pAnother << endl; // Output the value pointed to by pAnother (which is the value of number)

return 0;
}