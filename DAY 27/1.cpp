/*
Problem: Write a program to Create student record
management system.
*/

/*
Approach:
1. I will create a structure for student details.
2. Then I will take records of students from the user.
3. After that I will display all records.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
};

int main() {

    int n;
    cout << "Enter Number of Students" << endl;
    cin >> n;

    vector<Student> students(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        cout << "Enter Roll Number" << endl;
        cin >> students[i].rollNo;
        cout << "Enter Name" << endl;
        cin >> students[i].name;
        cout << "Enter Marks" << endl;
        cin >> students[i].marks;
    }

    cout << "\nStudent Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << students[i].rollNo << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }

    return 0;
}
