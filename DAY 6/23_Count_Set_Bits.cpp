/*
Problem: Write a program to Count set bits in a number.
*/

/*
Approach:
1. I will take a number as input from the user.
2. I will check each bit from right to left.
3. If the bit is 1, I will increment the count.
TC:O(log N)
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    int count = 0;

    // Count set bits (1s in binary representation)
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num = num >> 1;
    }

    cout << "Number of set bits: " << count << endl;

    return 0;
}
