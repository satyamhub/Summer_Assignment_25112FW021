/*
Problem: Write a program to Create employee
management system.
*/

/*
Approach:
1. I will create a structure for employee details.
2. Then I will take records of employees from the user.
3. After that I will display all employee records.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

int main() {

    int n;
    cout << "Enter Number of Employees" << endl;
    cin >> n;

    vector<Employee> employees(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Employee " << i + 1 << endl;
        cout << "Enter Employee ID" << endl;
        cin >> employees[i].id;
        cout << "Enter Name" << endl;
        cin >> employees[i].name;
        cout << "Enter Department" << endl;
        cin >> employees[i].department;
        cout << "Enter Salary" << endl;
        cin >> employees[i].salary;
    }

    cout << "\nEmployee Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Employee ID: " << employees[i].id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << "Salary: " << employees[i].salary << endl;
        cout << endl;
    }

    return 0;
}
