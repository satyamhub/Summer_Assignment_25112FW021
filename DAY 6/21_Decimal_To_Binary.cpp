/*
Problem: Write a program to Convert decimal to binary.
*/

/*
Approach:
1. I will take a decimal number as input from the user.
2. I will repeatedly divide the number by 2 and store the remainder.
3. I will reverse the remainders to get the binary representation.
TC:O(log N)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Decimal Number: ";
    int num;
    cin >> num;

    string binary = "";

    // Convert decimal to binary
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }

    while (num > 0) {
        binary = (char)('0' + (num % 2)) + binary;
        num = num / 2;
    }

    cout << "Binary: " << binary << endl;

    return 0;
}
