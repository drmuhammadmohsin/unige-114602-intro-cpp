#include <iostream>
using namespace std;

int main() {
    double score1, score2, score3;
    
    // Read three test scores
    cout << "Enter three test scores: ";
    cin >> score1 >> score2 >> score3;
    
    // Calculate average
    double average = (score1 + score2 + score3) / 3.0;
    
    // Determine letter grade and message
    char grade;
    string message;
    
    if (average >= 90 && average <= 100) {
        grade = 'A';
        message = "Excellent!";
    } else if (average >= 80 && average < 90) {
        grade = 'B';
        message = "Good job!";
    } else if (average >= 70 && average < 80) {
        grade = 'C';
        message = "Well done!";
    } else if (average >= 60 && average < 70) {
        grade = 'D';
        message = "You passed.";
    } else {
        grade = 'F';
        message = "Better luck next time.";
    }
    
    // Display results
    cout << "Average score: " << average << endl;
    cout << "Letter grade: " << grade << endl;
    cout << message << endl;
    
    return 0;
}
