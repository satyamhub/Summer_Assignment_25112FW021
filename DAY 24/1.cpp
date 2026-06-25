/*
Problem:Write a program to Check string rotation.

*/


/*
Approach:
1. I will take the input of the both string to check rotation.
2. I will call the function to check the rotation.
3. The function will first check both length are equal or not.
4. then, every possible rotation is the part of substring of the double of string.

TC:O(N)
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;

bool isRotation(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    string temp = s1 + s1;

    return temp.find(s2) != string::npos;
}

int main() {
    string s1, s2;

    cout << "Enter first string: "<<endl;
    cin >> s1;

    cout << "Enter second string: "<<endl;
    cin >> s2;

    if (isRotation(s1, s2)) {
        cout << "Strings are rotations of each other." << endl;
    } else {
        cout << "Strings are not rotations of each other." << endl;
    }

    return 0;
}
