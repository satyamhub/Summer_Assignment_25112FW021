/*
Problem: Write a program to Create bank account
system.
*/

/*
Approach:
1. I will take account holder details from the user.
2. Then I will show menu for deposit, withdraw and balance check.
3. I will perform operation according to user choice.

TC:O(Number of choices)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string name;
    int accountNo;
    double balance;

    cout << "Enter Account Holder Name" << endl;
    cin >> name;

    cout << "Enter Account Number" << endl;
    cin >> accountNo;

    cout << "Enter Opening Balance" << endl;
    cin >> balance;

    int choice;

    do {
        cout << "\n1. Deposit Money";
        cout << "\n2. Withdraw Money";
        cout << "\n3. Check Balance";
        cout << "\n4. Account Details";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            double amount;
            cout << "Enter Amount to Deposit" << endl;
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited Successfully" << endl;
            } else {
                cout << "Invalid Amount" << endl;
            }
        } else if (choice == 2) {
            double amount;
            cout << "Enter Amount to Withdraw" << endl;
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid Amount" << endl;
            } else if (amount > balance) {
                cout << "Insufficient Balance" << endl;
            } else {
                balance -= amount;
                cout << "Amount Withdrawn Successfully" << endl;
            }
        } else if (choice == 3) {
            cout << "Current Balance is " << balance << endl;
        } else if (choice == 4) {
            cout << "Account Holder Name: " << name << endl;
            cout << "Account Number: " << accountNo << endl;
            cout << "Balance: " << balance << endl;
        } else if (choice == 5) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
