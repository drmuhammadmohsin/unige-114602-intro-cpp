#include <iostream>
#include <string>
using namespace std;

// Define the struct
struct Student {
    string name;
    int id;
    float grades[4];
};

// Function to compute average grade
float computeAverage(Student s) {
    float sum = 0;
    for(int i = 0; i < 4; i++) {
        sum += s.grades[i];
    }
    return sum / 4;
}

// Function to print a student's full record
void printStudent(Student s) {
    cout << "Name: " << s.name << endl;
    cout << "ID: " << s.id << endl;
    cout << "Grades: ";

    for(int i = 0; i < 4; i++) {
        cout << s.grades[i] << " ";
    }

    cout << endl;
    cout << "Average: " << computeAverage(s) << endl;
    cout << "---------------------" << endl;
}

// Function to display honor roll students
void honorRoll(Student students[], int n, float threshold) {
    cout << "\nHonor Roll Students:\n";

    for(int i = 0; i < n; i++) {
        if(computeAverage(students[i]) > threshold) {
            printStudent(students[i]);
        }
    }
}

int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    // Input student data
    for(int i = 0; i < n; i++) {

        cout << "\nEnter name: ";
        cin.ignore();
        getline(cin, students[i].name);

        cout << "Enter ID: ";
        cin >> students[i].id;

        cout << "Enter 4 grades: ";
        for(int j = 0; j < 4; j++) {
            cin >> students[i].grades[j];
        }
    }

    // Print all student records
    cout << "\nAll Student Records\n";
    cout << "====================\n";

    for(int i = 0; i < n; i++) {
        printStudent(students[i]);
    }

    // Honor roll
    float threshold;
    cout << "\nEnter honor roll threshold: ";
    cin >> threshold;

    honorRoll(students, n, threshold);

    return 0;
}