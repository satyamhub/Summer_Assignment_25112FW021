/*
Problem: Write a program to Recursive reverse number.
*/

/*
Approach:
1. I will create a recursive function that reverses the digits of a number.
2. I will use a global variable to store the reversed number.
3. Base case: if n is 0, return.
4. Recursive case: extract last digit and add to reversed number.
TC:O(log N)
SC:O(log N) due to recursive call stack
*/

// code

#include <bits/stdc++.h>
using namespace std;

long long reversed = 0;

void reverseNumber(long long n) {
    if (n == 0)
        return;
    reversed = reversed * 10 + (n % 10);
    reverseNumber(n / 10);
}

int main() {

    cout << "Enter Number: ";
    long long num;
    cin >> num;

    reverseNumber(num);

    cout << "Reversed: " << reversed << endl;

    return 0;
}
