/*
Problem: Write a program to Check whether a number is palindrome.
*/


/*
Approach:
1. I will take input from the user.
2. I will store the original number.
3. I will reverse the number by extracting digits one by one.
4. I will compare reversed number with original number.
5. If both are equal, it is palindrome else not.
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    int original = num;
    int reversed = 0;

    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if(original == reversed){
        cout<<"Number is Palindrome"<<endl;
    }
    else{
        cout<<"Number is Not Palindrome"<<endl;
    }

    return 0;
}
