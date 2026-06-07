/*
Problem: Write a program to Recursive sum of digits.
*/


/*
Approach:
1. I will create a recursive function that calculates sum of digits.
2. Base case: if n is 0, return 0.
3. Recursive case: return (n % 10) + sumOfDigits(n / 10).
TC:O(log N)
SC:O(log N) due to recursive call stack
*/

//code

#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    if(n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    cout<<"Sum of Digits: "<<sumOfDigits(num)<<endl;

    return 0;
}
