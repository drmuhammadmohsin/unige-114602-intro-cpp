// ============================================
//  EXAMPLE 3: The Broken Bank Account
//  Concepts: unused return value,
//            empty if-body,
//            always-true condition
// ============================================
#include <iostream>

int balance = 1000;

// BUG 1: function returns success/fail
//        but caller never checks it!
bool withdraw(int amount) {
    if (amount > balance) {
        std::cout << "Insufficient funds!\n";
        return false;
    }
    balance -= amount;
    return true;
}

// BUG 2: semicolon after if = empty body!
//        the block always runs regardless
void checkAge(int age) {
    if (age < 18);   // <-- accidental semicolon! -Wall catches this
    {
        std::cout << "Account created!\n"; // always runs, even if age < 18!
    }
}

// BUG 3: condition is always true (logical error)
void validatePin(int pin) {
    if (pin >= 0 || pin < 10000) {  // || should be &&, always true!
        std::cout << "PIN accepted!\n";
    } else {
        std::cout << "Invalid PIN!\n"; // this line NEVER runs
    }
}

int main() {
    withdraw(200);     // return value ignored — did it succeed?
    withdraw(900);     // return value ignored — did it succeed?

    checkAge(15);      // should block under-18, but won't!
    validatePin(-999); // invalid pin, but still accepted!

    std::cout << "Final Balance: " << balance << "\n";
    return 0;
}