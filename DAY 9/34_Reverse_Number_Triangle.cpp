/*
Problem: Write a program to Print reverse number triangle.
*/

/*
Approach:
1. I will take the number (n) as input from the user.
2. I will run outer loop from n to 1.
3. For each row, I will print numbers starting from n down to (n - i + 1).
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

    // Print reverse number triangle
    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
