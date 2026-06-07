/*
Problem: Write a program to Convert binary to decimal.
*/


/*
Approach:
1. I will take a binary number as input from the user.
2. I will extract each digit from right to left.
3. I will multiply each digit by powers of 2 and sum them.
TC:O(log N)
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Binary Number: ";
    long long binary;
    cin>>binary;

    long long decimal = 0;
    long long power = 1;

    // Convert binary to decimal
    while(binary > 0){
        int digit = binary % 10;
        decimal += digit * power;
        power *= 2;
        binary = binary / 10;
    }

    cout<<"Decimal: "<<decimal<<endl;

    return 0;
}
