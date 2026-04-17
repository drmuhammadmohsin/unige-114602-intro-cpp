#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int* grades;
    int numGrades;
};

int main() {
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    // 1. ALLOCATE AN ARRAY OF STUDENT STRUCTS
    // TODO: Student* students = ...
    Student* students = nullptr;

    if (students != nullptr) {
        for (int i = 0; i < numStudents; i++) {
            cout << "\nEnter name for student " << i + 1 << ": ";
            cin >> students[i].name;

            cout << "How many grades for " << students[i].name << "? ";
            cin >> students[i].numGrades;

            // 2. ALLOCATE THE GRADES ARRAY FOR THIS STUDENT
            // TODO: students[i].grades = ...
        }

        // 3. (Optional) FILL AND PRINT DATA
        // ...

        // 4. DEEP DEALLOCATION
        // TODO: For each student, delete their grades array
        // TODO: Delete the array of students
        
        cout << "\nMemory cleaned up successfully." << endl;
    } else {
        cout << "Students array not allocated." << endl;
    }

    return 0;
}
