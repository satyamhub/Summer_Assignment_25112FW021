/*
Problem: Write a program to Print hollow square pattern.
*/

/*
Approach:
1. I will take the size of the square as input.
2. I will run outer loop from 1 to n.
3. For each row:
   - If it's first or last row, print all stars.
   - Otherwise, print star at first and last position only.
TC:O(N^2)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Size: ";
    int n;
    cin >> n;

    // Print hollow square pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
