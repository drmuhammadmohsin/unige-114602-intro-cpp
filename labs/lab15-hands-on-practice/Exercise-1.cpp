#include <iostream>
using namespace std;

void printArray(int A[], int arraySize);
void p(int A[], int arraySize);

int main() {
    int n, numbers[4];
    std::cout << "Enter four numbers: ";
    for(int i = 0; i < 4; i++) {
        std::cin >> numbers[i];
    }
    p(numbers, 4);
    printArray(numbers, 4);
    return 0;
}

void printArray(int A[], int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        cout << A[i] << " ";
    }
}

void p(int B[], int arraySize) {
    B[3] = 9;
}