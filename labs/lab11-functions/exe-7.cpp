
#include <iostream> // Including input/output stream library

using namespace std; // Using the standard namespace

// Function to test if a string is a palindrome
string test_Palindrome(string text) {
  string str1, str2; // Declare two strings to store processed characters
  int str_len = int(text.size()); // Calculate the length of the input string

  // Loop through the string to form two strings containing only lowercase alphabets
  for (int i = 0; i < str_len; i++) {
    // Check if the character is an alphabet (case-insensitive) and add it to str1
    if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
      str1 += tolower(text[i]);

    // Check if the character (from the end of the string) is an alphabet and add it to str2
    if ((text[str_len - 1 - i] >= 'a' && text[str_len - 1 - i] <= 'z') || (text[str_len - 1 - i] >= 'A' && text[str_len - 1 - i] <= 'Z'))
      str2 += tolower(text[str_len - 1 - i]);
  }

  // Check if the processed strings str1 and str2 are equal (if the input string is a palindrome)
  if (str1 == str2)
    return "True"; // Return "True" if the string is a palindrome
  return "False"; // Return "False" if the string is not a palindrome
}

// Main function
int main() {
  // Output the result of testing strings for being palindromes
  cout << "Is madam a Palindrome? " << test_Palindrome("madam");
  cout << "\nIs racecar a Palindrome? " << test_Palindrome("racecar");
  cout << "\nIs abc a Palindrome? " << test_Palindrome("abc");
  return 0; // Return 0 to indicate successful completion
