#include <iostream>
using namespace std;

const int MAX_STUDENTS = 50;

// Function to input student names and marks
void inputData(string names[], int marks[], int count) {
    for (int i = 0; i < count; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        cin >> names[i];
        cout << "Enter marks of " << names[i] << ": ";
        cin >> marks[i];
    }
}

// Function to calculate grade based on marks
char getGrade(int mark) {
    if (mark >= 90) return 'A';
    else if (mark >= 75) return 'B';
    else if (mark >= 60) return 'C';
    else if (mark >= 40) return 'D';
    else return 'F';
}

// Function to display all student records using pointer
void displayData(string names[], int marks[], int count) {
    int* markPtr = marks;   // pointer to marks array

    cout << "\n----- Student Report -----\n";
    cout << "Name\t\tMarks\tGrade\n";
    for (int i = 0; i < count; i++) {
        char grade = getGrade(*(markPtr + i));   // access via pointer
        cout << names[i] << "\t\t" << *(markPtr + i) << "\t" << grade << endl;
    }
}

// Function to find the topper using pointer
void findTopper(string names[], int marks[], int count) {
    int* markPtr = marks;
    int topIndex = 0;

    for (int i = 1; i < count; i++) {
        if (*(markPtr + i) > *(markPtr + topIndex)) {
            topIndex = i;
        }
    }
    cout << "\nTopper: " << names[topIndex] << " with " << marks[topIndex] << " marks\n";
}

// Function to calculate class average
void classAverage(int marks[], int count) {
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += marks[i];
    }
    double avg = (double)sum / count;
    cout << "Class Average: " << avg << endl;
}

int main() {
    string names[MAX_STUDENTS];
    int marks[MAX_STUDENTS];
    int count;

    cout << "===== Student Grade Manager =====\n";
    cout << "Enter number of students: ";
    cin >> count;

    if (count <= 0 || count > MAX_STUDENTS) {
        cout << "Invalid number of students.\n";
        return 0;
    }

    inputData(names, marks, count);
    displayData(names, marks, count);
    findTopper(names, marks, count);
    classAverage(marks, count);

    return 0;
}