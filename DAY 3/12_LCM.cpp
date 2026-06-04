/*
Problem: Write a program to Find LCM of two numbers.
*/

/*
Approach: Using formula LCM(a,b) = (a*b)/GCD(a,b)
1. I will take two numbers as input from the user.
2. I will find GCD using Euclidean algorithm.
3. Then I will use the formula LCM = (a*b)/GCD to find LCM.
4. Display the result.
TC:O(log(min(a,b)))
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter First Number: ";
    int num1;
    cin >> num1;

    cout << "Enter Second Number: ";
    int num2;
    cin >> num2;

    int a = num1, b = num2;

    // Finding GCD
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int gcd = num1;

    // Finding LCM using formula
    int lcm = (a * b) / gcd;

    cout << "LCM: " << lcm << endl;

    return 0;
}
