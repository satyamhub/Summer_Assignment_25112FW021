/*
Problem: Write a program to Create menu-driven
string operations system.

*/

/*
Approach:
1. I will take a string from the user.
2. Then I will show menu for length, reverse, uppercase, lowercase and palindrome.
3. I will perform operation according to user choice.

TC:O(N) for each operation
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter String" << endl;
    cin >> str;

    int choice;

    do {
        cout << "\n1. Find Length";
        cout << "\n2. Reverse String";
        cout << "\n3. Convert to Uppercase";
        cout << "\n4. Convert to Lowercase";
        cout << "\n5. Check Palindrome";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Length of String is " << str.length() << endl;
        } else if (choice == 2) {
            string temp = str;
            reverse(temp.begin(), temp.end());
            cout << "Reverse String is " << temp << endl;
        } else if (choice == 3) {
            string temp = str;
            int n = temp.length();
            for (int i = 0; i < n; i++) {
                temp[i] = toupper(temp[i]);
            }
            cout << "Uppercase String is " << temp << endl;
        } else if (choice == 4) {
            string temp = str;
            int n = temp.length();
            for (int i = 0; i < n; i++) {
                temp[i] = tolower(temp[i]);
            }
            cout << "Lowercase String is " << temp << endl;
        } else if (choice == 5) {
            string temp = str;
            reverse(temp.begin(), temp.end());

            if (temp == str) {
                cout << "String is Palindrome" << endl;
            } else {
                cout << "String is not Palindrome" << endl;
            }
        } else if (choice == 6) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 6);

    return 0;
}
