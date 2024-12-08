#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int marks;
    char grade;
    int rank;
};

bool compareMarks(Student a, Student b) {
    return a.marks > b.marks;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Sort students by marks in descending order
    sort(students.begin(), students.end(), compareMarks);

    // Assign ranks
    for (int i = 0; i < n; ++i) {
        students[i].rank = i + 1;
    }

    // Assign grades based on marks
    for (int i = 0; i < n; ++i) {
        if (students[i].marks >= 90) {
            students[i].grade = 'A';
        } else if (students[i].marks >= 80) {
            students[i].grade = 'B';
        } else if (students[i].marks >= 70) {
            students[i].grade = 'C';
        } else if (students[i].marks >= 60) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    // Display results
    cout << "\nResults:\n";
    cout << "Rank\tName\tMarks\tGrade\n";
    for (int i = 0; i < n; ++i) {
        cout << students[i].rank << "\t" << students[i].name << "\t" << students[i].marks << "\t" << students[i].grade << endl;
    }

    return 0;
}
