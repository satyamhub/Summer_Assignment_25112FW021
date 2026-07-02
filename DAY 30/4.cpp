/*
Problem: Write a program to Develop complete mini
project using arrays, strings and functions.

*/

/*
Approach:
1. I will create functions to add, display and search student records.
2. I will store roll number, name and marks using arrays and strings.
3. I will perform operation according to user choice.

TC:O(N) for search and display
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;

void addStudent(int rollNo[], string name[], float marks[], int &n) {
    cout << "Enter Roll Number" << endl;
    cin >> rollNo[n];

    cout << "Enter Name" << endl;
    cin >> name[n];

    cout << "Enter Marks" << endl;
    cin >> marks[n];

    n++;
    cout << "Student Added Successfully" << endl;
}

void displayStudents(int rollNo[], string name[], float marks[], int n) {
    cout << "\nStudent Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Roll Number: " << rollNo[i] << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Marks: " << marks[i] << endl;
        cout << endl;
    }
}

void searchStudent(int rollNo[], string name[], float marks[], int n) {
    int roll;
    bool found = false;

    cout << "Enter Roll Number to Search" << endl;
    cin >> roll;

    for (int i = 0; i < n; i++) {
        if (rollNo[i] == roll) {
            cout << "Student Found" << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student not found" << endl;
    }
}

int main() {

    int rollNo[100];
    string name[100];
    float marks[100];
    int n = 0;
    int choice;

    do {
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            if (n < 100) {
                addStudent(rollNo, name, marks, n);
            } else {
                cout << "Record is full" << endl;
            }
        } else if (choice == 2) {
            displayStudents(rollNo, name, marks, n);
        } else if (choice == 3) {
            searchStudent(rollNo, name, marks, n);
        } else if (choice == 4) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
