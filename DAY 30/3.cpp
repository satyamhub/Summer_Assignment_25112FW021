/*
Problem: Write a program to Create mini employee
management system.

*/

/*
Approach:
1. I will store employee details using arrays.
2. Then I will show menu to display, search and calculate total salary.
3. I will perform operation according to user choice.

TC:O(N) for search and display
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter Number of Employees" << endl;
    cin >> n;

    int id[100];
    string name[100], department[100];
    double salary[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Employee " << i + 1 << endl;
        cout << "Enter Employee ID" << endl;
        cin >> id[i];
        cout << "Enter Name" << endl;
        cin >> name[i];
        cout << "Enter Department" << endl;
        cin >> department[i];
        cout << "Enter Salary" << endl;
        cin >> salary[i];
    }

    int choice;

    do {
        cout << "\n1. Display Employees";
        cout << "\n2. Search Employee";
        cout << "\n3. Total Salary";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "\nEmployee Records" << endl;
            for (int i = 0; i < n; i++) {
                cout << "Employee ID: " << id[i] << endl;
                cout << "Name: " << name[i] << endl;
                cout << "Department: " << department[i] << endl;
                cout << "Salary: " << salary[i] << endl;
                cout << endl;
            }
        } else if (choice == 2) {
            int empId;
            bool found = false;

            cout << "Enter Employee ID to Search" << endl;
            cin >> empId;

            for (int i = 0; i < n; i++) {
                if (id[i] == empId) {
                    cout << "Employee Found" << endl;
                    cout << "Name: " << name[i] << endl;
                    cout << "Department: " << department[i] << endl;
                    cout << "Salary: " << salary[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Employee not found" << endl;
            }
        } else if (choice == 3) {
            double total = 0;
            for (int i = 0; i < n; i++) {
                total += salary[i];
            }
            cout << "Total Salary is " << total << endl;
        } else if (choice == 4) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
