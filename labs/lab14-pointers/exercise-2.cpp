#include <iostream>
using namespace std;

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin >> str;

    char* ptr = str;

    // Move pointer to end
    while (*ptr != '\0') {
        ptr++;
    }

    ptr--; // move back to last character

    cout << "Reversed string: ";
    while (ptr >= str) {
        cout << *ptr;
        ptr--;
    }

    return 0;
}