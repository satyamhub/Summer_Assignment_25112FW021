/*
Problem: Write a program to Create menu-driven
calculator.

*/

/*
Approach:
1. I will show calculator menu to the user.
2. Then I will take two numbers from the user.
3. I will perform operation according to user choice.

TC:O(Number of choices)
SC:O(1)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int choice;

    do {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            double num1, num2;
            cout << "Enter Two Numbers" << endl;
            cin >> num1 >> num2;

            if (choice == 1) {
                cout << "Addition is " << num1 + num2 << endl;
            } else if (choice == 2) {
                cout << "Subtraction is " << num1 - num2 << endl;
            } else if (choice == 3) {
                cout << "Multiplication is " << num1 * num2 << endl;
            } else {
                if (num2 == 0) {
                    cout << "Division by zero is not possible" << endl;
                } else {
                    cout << "Division is " << num1 / num2 << endl;
                }
            }
        } else if (choice == 5) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
