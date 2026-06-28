/*
Problem: Write a program to Create contact
management system.
*/

/*
Approach:
1. I will create a structure for contact details.
2. Then I will take contacts from the user.
3. After that I will display all contact records.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

int main() {

    int n;
    cout << "Enter Number of Contacts" << endl;
    cin >> n;

    vector<Contact> contacts(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Contact " << i + 1 << endl;
        cout << "Enter Name" << endl;
        cin >> contacts[i].name;
        cout << "Enter Phone Number" << endl;
        cin >> contacts[i].phone;
        cout << "Enter Email" << endl;
        cin >> contacts[i].email;
    }

    cout << "\nContact Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << contacts[i].name << endl;
        cout << "Phone Number: " << contacts[i].phone << endl;
        cout << "Email: " << contacts[i].email << endl;
        cout << endl;
    }

    return 0;
}
