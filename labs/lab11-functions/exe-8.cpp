#include <iostream>
using namespace std;

// Function to convert an integer to its Roman numeral representation
string integer_to_Roman(int n) {

    // Arrays holding Roman numeral symbols and their respective values
    string str_romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Initialize an empty string to hold the resulting Roman numeral
    string result = "";

    // Loop through the values and corresponding Roman symbols
    for (auto i = 0; i < 13; ++i)
    {
        // While the current number is greater than or equal to the value
        while(n - values[i] >= 0)
        {
            // Append the Roman symbol to the result and subtract the value from the number
            result += str_romans[i];
            n -= values[i];
        }
    }

    // Return the resulting Roman numeral
    return result;
}

// Main function to test the integer_to_Roman function
int main()  
{  
    // Test cases to convert integers to Roman numerals using the integer_to_Roman function
    int n = 7;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(7) << endl;
    n = 19;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(19) << endl;
    n = 789;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(789) << endl;
    n = 1099;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(1099) << endl;
    n = 23456;
    cout << "Integer " << n << " : Roman " << integer_to_Roman(23456) << endl;			
    return 0;  
}
