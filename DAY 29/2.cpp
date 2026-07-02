/*
Problem: Write a program to Create menu-driven array
operations system.

*/

/*
Approach:
1. I will take array elements from the user.
2. Then I will show menu for display, sum, largest, smallest and search.
3. I will perform operation according to user choice.

TC:O(N) for each operation
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter Size of Array" << endl;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter Array Elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;

    do {
        cout << "\n1. Display Array";
        cout << "\n2. Sum of Array";
        cout << "\n3. Largest Element";
        cout << "\n4. Smallest Element";
        cout << "\n5. Search Element";
        cout << "\n6. Exit";
        cout << "\nEnter Your Choice" << endl;
        cin >> choice;

        if (choice == 1) {
            cout << "Array Elements are ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else if (choice == 2) {
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += arr[i];
            }
            cout << "Sum of Array is " << sum << endl;
        } else if (choice == 3) {
            int largest = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] > largest) {
                    largest = arr[i];
                }
            }
            cout << "Largest Element is " << largest << endl;
        } else if (choice == 4) {
            int smallest = arr[0];
            for (int i = 1; i < n; i++) {
                if (arr[i] < smallest) {
                    smallest = arr[i];
                }
            }
            cout << "Smallest Element is " << smallest << endl;
        } else if (choice == 5) {
            int key;
            bool found = false;

            cout << "Enter Element to Search" << endl;
            cin >> key;

            for (int i = 0; i < n; i++) {
                if (arr[i] == key) {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Element not found" << endl;
            }
        } else if (choice == 6) {
            cout << "Thank You";
        } else {
            cout << "Invalid Choice" << endl;
        }
    } while (choice != 6);

    return 0;
}
