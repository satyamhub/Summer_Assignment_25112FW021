/*
Problem: Write a program to Check anagram strings.

*/

/*
Approach:
1. I will take input from the user of the both strings.
2. I will call the anagram checker function, which will sort both the string.
3. if both sorted string is equal the they are anagram.


TC:O(2*NlogN);
SC:O(1)


*/

// code

#include <bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2) {

    if (s1.size() != s2.size())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {

    string str1;
    string str2;
    cout << "Enter String 1" << endl;
    cin >> str1;

    cout << "Enter String 2" << endl;
    cin >> str2;

    if (anagram(str1, str2)) {
        cout << "Yes, both strings are anagram";
    } else {
        cout << "No, both strings not are anagram";
    }

    return 0;
}
