/*
Problem: Write a program to Print reverse pyramid.
*/

/*
Approach:
1. I will take the number of rows as input.
2. For each row i from n to 1:
   - Print (n - i) spaces for alignment.
   - Print (2*i - 1) stars.
TC:O(N^2)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int n;
    cin >> n;

    // Print reverse pyramid
    for (int i = n; i >= 1; i--) {
        // Print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
