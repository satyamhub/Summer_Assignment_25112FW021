/*
Problem: Write a program to Create salary management
system.
*/

/*
Approach:
1. I will take employee name and basic salary from the user.
2. Then I will calculate HRA, DA, PF and gross salary.
3. After that I will display salary details.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Salary {
    string name;
    double basicSalary;
    double hra;
    double da;
    double pf;
    double grossSalary;
    double netSalary;
};

int main() {

    int n;
    cout << "Enter Number of Employees" << endl;
    cin >> n;

    vector<Salary> employees(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Employee Name" << endl;
        cin >> employees[i].name;

        cout << "Enter Basic Salary" << endl;
        cin >> employees[i].basicSalary;

        employees[i].hra = employees[i].basicSalary * 0.20;
        employees[i].da = employees[i].basicSalary * 0.10;
        employees[i].pf = employees[i].basicSalary * 0.12;
        employees[i].grossSalary = employees[i].basicSalary + employees[i].hra + employees[i].da;
        employees[i].netSalary = employees[i].grossSalary - employees[i].pf;
    }

    cout << "\nSalary Details" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << employees[i].name << endl;
        cout << "Basic Salary: " << employees[i].basicSalary << endl;
        cout << "HRA: " << employees[i].hra << endl;
        cout << "DA: " << employees[i].da << endl;
        cout << "PF: " << employees[i].pf << endl;
        cout << "Gross Salary: " << employees[i].grossSalary << endl;
        cout << "Net Salary: " << employees[i].netSalary << endl;
        cout << endl;
    }

    return 0;
}
