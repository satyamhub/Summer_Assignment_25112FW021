/*
Problem: Write a program to Print half pyramid pattern.
    *
    * *
    * * *
    * * * *
    * * * * *
*/

/*
Approach:
1. I will take input from the user for number of rows.
2. Then i will run a two nested loop.
3. 1st loop is for the row and 2nd loop for column.

TC:O(N*(N+1)/2)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

void pattern(int n) {
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {

    int n;
    cin >> n;
    pattern(n);

    return 0;
}
