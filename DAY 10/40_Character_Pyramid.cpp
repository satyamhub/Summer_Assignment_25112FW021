/*
Problem: Write a program to Print character pyramid.
*/

/*
Approach:
1. I will take the number of rows as input.
2. For each row i from 1 to n:
   - For each column j from 1 to i:
     - Print the character at (i - 1) offset from 'A'.
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

    // Print character pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << (char)('A' + i - 1);
        }
        cout << endl;
    }

    return 0;
}
