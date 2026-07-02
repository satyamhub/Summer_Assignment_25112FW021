/*
Problem: Write a program to Create student record
system using arrays and strings.

*/

/*
Approach:
1. I will use arrays to store roll numbers, names and marks.
2. Then I will take student records from the user.
3. After that I will display all student records.

TC:O(N)
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter Number of Students" << endl;
    cin >> n;

    int rollNo[100];
    string name[100];
    float marks[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Student " << i + 1 << endl;
        cout << "Enter Roll Number" << endl;
        cin >> rollNo[i];
        cout << "Enter Name" << endl;
        cin >> name[i];
        cout << "Enter Marks" << endl;
        cin >> marks[i];
    }

    cout << "\nStudent Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << rollNo[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Marks: " << marks[i] << endl;
        cout << endl;
    }

    return 0;
}
