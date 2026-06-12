/*
Problem: Write a program to Write function for
palindrome.

*/

/*
Approach:
1. I will take input from the user to check the palindrome.
2. I will call the function to check the palindrome.
3. It will return false if number is negative.
4. else It will furthur check if the reversed digit and original number are same.
5. If it is same if will return true, Else return false.

TC:O(log10(N)+1)
SC:(1)

*/

// Code

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    if(n<0)
        return false;
    int original = n;

    int rev = 0;
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if(rev==original)
        return true;

    return false;
}

int main() {

    int n;
    cout << "Enter The number To check Palindrome" << endl;
    cin >> n;

    if (palindrome(n)) {
        cout << "Yes It is Palindrome";
    } else {
        cout << "No It is not Palindrome";
    }

    return 0;
}
