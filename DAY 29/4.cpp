/*
Problem: Write a program to Create inventory
management system.

*/

/*
Approach:
1. I will create a structure for item details.
2. Then I will take item records from the user.
3. After that I will show menu to display, search and update quantity.

TC:O(N) for search and display
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};


int main() {

    int n;
    cout << "Enter Number of Items" << endl;
    cin >> n;

    vector<Item> items(n);

    for (int i = 0; i < n; i++) {
        cout << "\nEnter Details of Item " << i + 1 << endl;
        cout << "Enter Item ID" << endl;
        cin >> items[i].id;
        cout << "Enter Item Name" << endl;
        cin >> items[i].name;
        cout << "Enter Quantity" << endl;
        cin >> items[i].quantity;
        cout << "Enter Price" << endl;
        cin >> items[i].price;
    }

    int choice;

    do {
        cout << "\n1. Display Inventory";
        cout << "\n2. Search Item";
        cout << "\n3. Update Quantity";
        cout << "\n4. Total Inventory Value";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "\nInventory Records" << endl;
            for (int i = 0; i < n; i++) {
                cout << "Item ID: " << items[i].id << endl;
                cout << "Name: " << items[i].name << endl;
                cout << "Quantity: " << items[i].quantity << endl;
                cout << "Price: " << items[i].price << endl;
                cout << endl;
            }
        } else if (choice == 2) {
            int id;
            bool found = false;

            cout << "Enter Item ID to Search" << endl;
            cin >> id;

            for (int i = 0; i < n; i++) {
                if (items[i].id == id) {
                    cout << "Item Found" << endl;
                    cout << "Name: " << items[i].name << endl;
                    cout << "Quantity: " << items[i].quantity << endl;
                    cout << "Price: " << items[i].price << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item not found" << endl;
            }
        } else if (choice == 3) {
            int id, quantity;
            bool found = false;

            cout << "Enter Item ID" << endl;
            cin >> id;
            cout << "Enter New Quantity" << endl;
            cin >> quantity;

            for (int i = 0; i < n; i++) {
                if (items[i].id == id) {
                    items[i].quantity = quantity;
                    cout << "Quantity Updated Successfully" << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Item not found" << endl;
            }
        } else if (choice == 4) {
            double total = 0;
            for (int i = 0; i < n; i++) {
                total += items[i].quantity * items[i].price;
            }
            cout << "Total Inventory Value is " << total << endl;
        } else if (choice == 5) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 5);

    return 0;
}
