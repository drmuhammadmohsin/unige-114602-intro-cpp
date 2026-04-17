#include <iostream>
#include <cmath>   // For pow function
#include <cstdlib> // For exit function

using namespace std;

// Function prototypes
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double a, double b);

int main() {
    double num1, num2;
    char op;

    // Taking user input
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter an operator (+, -, *, /, ^): ";
    cin >> op;
    
    cout << "Enter second number: ";
    cin >> num2;

    // Performing calculation
    double result;
    switch (op) {
        case '+': result = add(num1, num2); break;
        case '-': result = subtract(num1, num2); break;
        case '*': result = multiply(num1, num2); break;
        case '/': 
            if (num2 == 0) {
                cout << "Error: Division by zero!\n";
                exit(1);
            }
            result = divide(num1, num2);
            break;
        case '^': result = power(num1, num2); break;
        default:
            cout << "Error: Invalid operator!\n";
            exit(1);
    }

    // Printing result
    cout << "Result: " << result << endl;
    return 0;
}

// Function definitions
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return a / b; }
double power(double a, double b) { return pow(a, b); }
