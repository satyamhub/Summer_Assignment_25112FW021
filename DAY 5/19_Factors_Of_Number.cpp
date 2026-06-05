/*
Problem: Write a program to Print factors of a number.
*/

/*
Approach:
1. I will take a number as input from the user.
2. I will run a loop from 1 to N.
3. For each number, I will check if it divides N completely.
4. If yes, I will print that number as a factor.
TC:O(N)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    cout << "Factors of " << num << " are: ";

    // Find and print all factors
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
