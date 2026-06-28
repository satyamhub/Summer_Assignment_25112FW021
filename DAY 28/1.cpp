/*
Problem: Write a program to Create library
management system.
*/

/*
Approach:
1. I will create a structure for book details.
2. Then I will take book records from the user.
3. After that I will display all book records.

TC:O(N)
SC:O(N)

*/

//code

#include <bits/stdc++.h>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    int quantity;
};

int main() {

    int n;
    cout << "Enter Number of Books" << endl;
    cin >> n;

    vector<Book> books(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Book " << i + 1 << endl;
        cout << "Enter Book ID" << endl;
        cin >> books[i].id;
        cout << "Enter Book Title" << endl;
        cin >> books[i].title;
        cout << "Enter Author Name" << endl;
        cin >> books[i].author;
        cout << "Enter Quantity" << endl;
        cin >> books[i].quantity;
    }

    cout << "\nLibrary Records" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Book ID: " << books[i].id << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Quantity: " << books[i].quantity << endl;
        cout << endl;
    }

    return 0;
}
