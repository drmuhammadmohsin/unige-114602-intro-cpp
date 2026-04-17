// ============================================
//  EXAMPLE 1: The Forgetful Calculator
//  Concepts: uninitialized variable,
//            missing return, unused variable
// ============================================
#include <iostream>

// BUG 1: Function says it returns int but doesn't!
int multiply(int a, int b) {
    int answer = a * b;
    return answer;
}

// BUG 2: result is calculated but never used
void divide(int a, int b) {
    int result = a / b;
    std::cout << "Division result: " << result << "\n";
}

int main() {
    // BUG 3: total is never initialized
    int total = multiply(5, 3);
    std::cout << "Total is: " << total << "\n";

    divide(10, 2);

    return 0;
}

