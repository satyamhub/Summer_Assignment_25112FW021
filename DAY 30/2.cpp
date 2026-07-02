/*
Problem: Write a program to Create mini library
system.

*/

/*
Approach:
1. I will store book details using arrays.
2. Then I will show menu to display, search and issue book.
3. I will perform operation according to user choice.

TC:O(N) for search and display
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter Number of Books" << endl;
    cin >> n;

    int bookId[100], quantity[100];
    string title[100], author[100];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Book " << i + 1 << endl;
        cout << "Enter Book ID" << endl;
        cin >> bookId[i];
        cout << "Enter Book Title" << endl;
        cin >> title[i];
        cout << "Enter Author Name" << endl;
        cin >> author[i];
        cout << "Enter Quantity" << endl;
        cin >> quantity[i];
    }

    int choice;

    do {
        cout << "\n1. Display Books";
        cout << "\n2. Search Book";
        cout << "\n3. Issue Book";
        cout << "\n4. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "\nBook Records" << endl;
            for (int i = 0; i < n; i++) {
                cout << "Book ID: " << bookId[i] << endl;
                cout << "Title: " << title[i] << endl;
                cout << "Author: " << author[i] << endl;
                cout << "Quantity: " << quantity[i] << endl;
                cout << endl;
            }
        } else if (choice == 2) {
            int id;
            bool found = false;

            cout << "Enter Book ID to Search" << endl;
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    cout << "Book Found" << endl;
                    cout << "Title: " << title[i] << endl;
                    cout << "Author: " << author[i] << endl;
                    cout << "Quantity: " << quantity[i] << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Book not found" << endl;
            }
        } else if (choice == 3) {
            int id;
            bool found = false;

            cout << "Enter Book ID to Issue" << endl;
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (bookId[i] == id) {
                    found = true;
                    if (quantity[i] > 0) {
                        quantity[i]--;
                        cout << "Book Issued Successfully" << endl;
                    } else {
                        cout << "Book is not available" << endl;
                    }
                    break;
                }
            }

            if (!found) {
                cout << "Book not found" << endl;
            }
        } else if (choice == 4) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 4);

    return 0;
}
