/*
Problem: Write a program to Create marksheet
generation system.
*/

/*
Approach:
1. I will take student details and marks of subjects from the user.
2. Then I will calculate total, percentage and grade.
3. After that I will display the marksheet.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Marksheet {
    string name;
    int rollNo;
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {

    int n;
    cout << "Enter Number of Students" << endl;
    cin >> n;

    vector<Marksheet> students(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Student Name" << endl;
        cin >> students[i].name;

        cout << "Enter Roll Number" << endl;
        cin >> students[i].rollNo;

        students[i].total = 0;

        cout << "Enter Marks of 5 Subjects" << endl;
        for (int j = 0; j < 5; j++) {
            cin >> students[i].marks[j];
            students[i].total += students[i].marks[j];
        }

        students[i].percentage = students[i].total / 5.0;

        if (students[i].percentage >= 90) {
            students[i].grade = 'A';
        } else if (students[i].percentage >= 75) {
            students[i].grade = 'B';
        } else if (students[i].percentage >= 60) {
            students[i].grade = 'C';
        } else if (students[i].percentage >= 40) {
            students[i].grade = 'D';
        } else {
            students[i].grade = 'F';
        }
    }

    cout << "\nMarksheet" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Total Marks: " << students[i].total << endl;
        cout << "Percentage: " << students[i].percentage << endl;
        cout << "Grade: " << students[i].grade << endl;
        cout << endl;
    }

    return 0;
}
