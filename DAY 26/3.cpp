/*
Problem: Write a program to Create ATM simulation.
*/

/*
Approach:
1. I will initialize balance and pin.
2. Then I will take pin from the user and verify it.
3. After that I will show menu for check balance, deposit and withdraw.
4. I will perform the operation according to user choice.

TC:O(Number of choices)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    int pin = 1234;
    int enteredPin;
    double balance = 5000;

    cout << "Enter Your PIN" << endl;
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Invalid PIN";
        return 0;
    }

    int choice;

    do {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit Money";
        cout << "\n3. Withdraw Money";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Your Balance is " << balance << endl;
        } else if (choice == 2) {
            double amount;
            cout << "Enter Amount to Deposit" << endl;
            cin >> amount;

            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited Successfully" << endl;
            } else {
                cout << "Invalid Amount" << endl;
            }
        } else if (choice == 3) {
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
        } else if (choice == 4) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
