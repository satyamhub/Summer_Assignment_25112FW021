/*
Problem: Write a program to Print reverse star pattern.
*/

/*
Approach:
1. I will take the number of rows as input.
2. I will run outer loop from n to 1.
3. For each row, I will print stars equal to the current row number.
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

    // Print reverse star pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
