/*
Problem: Write a program to Print repeated character pattern.
*/

/*
Approach:
1. I will take the number of rows as input.
2. I will run outer loop from 1 to n.
3. For each row, I will print the character repeated equal to the current row number.
4. Characters start from 'A' and increment with each row.
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

    // Print repeated character pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << (char)('A' + i);
        }
        cout << endl;
    }

    return 0;
}
