#include <iostream>
using namespace std;

void printArray(int* p, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
}

void doubleValues(int* p, int size) {
    int* temp = p; // preserve original pointer

    for (int i = 0; i < size; i++) {
        *(temp + i) *= 2;
    }
}

int main() {
    int scores[5] = {85, 92, 70, 88, 95};

    cout << "Before: ";
    printArray(scores, 5);

    doubleValues(scores, 5);

    cout << "After: ";
    printArray(scores, 5);

    return 0;
}