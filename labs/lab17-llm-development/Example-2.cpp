// ============================================
//  EXAMPLE 2: The Confused Student Record
//  Concepts: unused parameter,
//            signed/unsigned comparison,
//            shadowed variable
// ============================================
#include <iostream>
#include <vector>

// BUG 1: 'className' passed but never used inside
void printStudent(std::string name, int age, std::string className) {
    std::cout << "Name: " << name << ", Age: " << age << ", Class: " << className << "\n";
}

// BUG 2: signed vs unsigned comparison
void checkPassingGrades(std::vector<int> grades) {
    int passingCount = 0;
    for (size_t i = 0; i < grades.size(); i++) {  // use size_t for consistency
        if (grades[i] >= 50)
            passingCount++;
    }
    std::cout << "Passing students: " << passingCount << "\n";
}

// BUG 3: inner 'score' shadows outer 'score'
void displayScore() {
    int score = 90;
    {
        int innerScore = 50;  // renamed to avoid shadowing
        std::cout << "Inner score: " << innerScore << "\n";
    }
    std::cout << "Outer score: " << score << "\n";
}

int main() {
    printStudent("Sara", 19, "CS101");

    std::vector<int> grades;
    grades.push_back(75);
    grades.push_back(45);
    grades.push_back(90);
    grades.push_back(30);
    grades.push_back(60);
    checkPassingGrades(grades);

    displayScore();
    return 0;
}