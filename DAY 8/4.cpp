/*
Problem: Write a program to Print repeated-number pattern.
1
22
333
4444
55555

*/

/*
Approach:
1. I will take input from the user for the number of rows required.
2. Then i will run two nested loops.
3. 1st loop is for row printing and 2nd loop is for column printing.
4. Then i will print the Repeated-number Pattern.

TC:O(N*(N+1)/2)
SC:O(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

void numberTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;

    numberTriangle(n);

    return 0;
}
