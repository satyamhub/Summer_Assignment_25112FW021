/*
Problem: Write a program to Check perfect number.
*/

/*
Approach:
1. I will take a number as input from the user.
2. I will find all divisors of the number (excluding the number itself).
3. I will sum all the divisors.
4. If sum equals the original number, it is a perfect number.
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

    int sum = 0;

    // Find sum of all divisors except the number itself
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num && num > 0) {
        cout << "Number is Perfect" << endl;
    } else {
        cout << "Number is not Perfect" << endl;
    }

    return 0;
}
