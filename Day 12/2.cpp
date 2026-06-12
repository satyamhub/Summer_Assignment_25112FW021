/*
Problem: Write a program to Write function for
Armstrong.


*/

/*
Approach:
1. I will take input from the user to check armstrong.
2. I will call the boolean function.
3. Function will extract each digit and power it its number of digit.
4. And add this to sum.
5. If sum is equal to the original number, then it is armstrong.

TC:O(log10(N)+1)
SC:(1)


*/

//Code

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int original = n;
    int sum = 0;
    int power = log10(n) + 1;

    while(n!=0){
        int digit = n % 10;
        sum += pow(digit, power);
        n /= 10;
    }

    if(sum==original){
        return true;
    }

    return false;
}

int main() {

    int n;
    cout << "Enter the number to check for Armstorng" << endl;
    cin >> n;

    if(armstrong(n)){
        cout << "Yes, It is Armstrong";
    }else{
        cout << "No, It is not Armstrong";
    }

    return 0;
}
