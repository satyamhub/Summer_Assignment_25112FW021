/*
Problem: Write a program to Find x^n without pow().
*/


/*
Approach:
1. I will take base (x) and exponent (n) as input from the user.
2. I will multiply x by itself n times to calculate x^n.
3. I will handle the case where n is negative (result will be 1/x^n).
TC:O(N)
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Base (x): ";
    double x;
    cin>>x;

    cout<<"Enter Exponent (n): ";
    int n;
    cin>>n;

    double result = 1;
    int absN = abs(n);

    // Calculate x^n
    for(int i = 0; i < absN; i++){
        result *= x;
    }

    // If n is negative, result is 1/x^n
    if(n < 0){
        result = 1 / result;
    }

    cout<<"Result: "<<result<<endl;

    return 0;
}
