/*
Problem: Write a program to Find GCD of two numbers.
*/


/*
Approach: Using Euclidean Algorithm
1. I will take two numbers as input from the user.
2. I will run a while loop until second number becomes 0.
3. In each iteration, I will replace first with second and second with remainder.
4. When second becomes 0, first is the GCD.
TC:O(log(min(a,b)))
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter First Number: ";
    int num1;
    cin>>num1;

    cout<<"Enter Second Number: ";
    int num2;
    cin>>num2;

    while(num2 != 0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    cout<<"GCD: "<<num1<<endl;

    return 0;
}
