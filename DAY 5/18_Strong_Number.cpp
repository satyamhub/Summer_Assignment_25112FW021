/*
Problem: Write a program to Check strong number.
*/

/*
Approach:
1. I will take a number as input from the user.
2. I will extract each digit and find its factorial.
3. I will sum all the factorials of digits.
4. If sum equals the original number, it is a strong number.
TC:O(N * M) where M is the value of each digit
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    int temp = num;
    int sum = 0;

    // Calculate sum of factorial of digits
    while (temp > 0) {
        int digit = temp % 10;
        sum += factorial(digit);
        temp = temp / 10;
    }

    if (sum == num) {
        cout << "Number is Strong" << endl;
    } else {
        cout << "Number is not Strong" << endl;
    }

    return 0;
}
