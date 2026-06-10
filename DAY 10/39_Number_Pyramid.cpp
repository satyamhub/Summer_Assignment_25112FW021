/*
Problem: Write a program to Print number pyramid.
*/

/*
Approach:
1. I will take the number of rows as input.
2. For each row i from 1 to n:
   - For each column j from 1 to i:
     - Print j if j <= i - (i - j), else print (2*i - j).
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

    // Print number pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
