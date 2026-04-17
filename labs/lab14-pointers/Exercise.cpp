#include <iostream>
using namespace std;

// Pass by value
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Using pointers
void swap2(int* p1, int* p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

// Pass by reference
void swap3(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;

    // swap1
    cout << "swap1 - Before: x=" << x << " y=" << y;
    swap1(x, y);
    cout << " | After: x=" << x << " y=" << y << endl;

    // swap2
    cout << "swap2 - Before: x=" << x << " y=" << y;
    swap2(&x, &y);
    cout << " | After: x=" << x << " y=" << y << endl;

    // swap3
    cout << "swap3 - Before: x=" << x << " y=" << y;
    swap3(x, y);
    cout << " | After: x=" << x << " y=" << y << endl;

    return 0;
}