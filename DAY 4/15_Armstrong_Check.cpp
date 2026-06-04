/*
Problem: Write a program to Check Armstrong number.
*/


/*
Approach:
1. I will take a number as input from the user.
2. I will count the number of digits in the number.
3. I will extract each digit and raise it to the power of number of digits.
4. Sum all the powered digits.
5. If sum equals original number, it is Armstrong number.
TC:O(log N)
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    int original = num;
    int count = 0;
    int temp = num;

    // Count number of digits
    while(temp > 0){
        count++;
        temp = temp / 10;
    }

    int sum = 0;
    temp = num;

    // Sum of digits raised to power of count
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, count);
        temp = temp / 10;
    }

    if(sum == original){
        cout<<"Number is Armstrong"<<endl;
    }
    else{
        cout<<"Number is Not Armstrong"<<endl;
    }

    return 0;
}
