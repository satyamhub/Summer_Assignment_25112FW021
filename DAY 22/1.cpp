/*
Problem: Write a program to Check palindrome string.

*/

/*
Approach:
1. I will Take the input from the user of the string.
2. I will Assign Two pointers one from the start and one from the end of the string.
3. I will run a loop to check if prefix and suffix is equal.

TC:O(N/2)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter the String" << endl;
    cin >> str;

    int n = str.size();

    int left = 0;
    int right = n - 1;

    while(left<right){
        if(str[left++]!=str[right--]){
            cout << "No, It is not Palindrome";
            return 0;
        }
    }

    cout << "It is Palindrome";

    return 0;
}
