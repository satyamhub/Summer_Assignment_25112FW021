/*
Problem: Write a program to Find common characters
in strings.
*/

/*
Approach:
1. I will take the input of both the strings from the user.
2. I will push the freq of all the character of string 1 in freq array.
3. Then i will iterate through the string 2 and check if that character freq in non zero.
4. Then this is common character.

TC:O(M+N)
SC:O(256)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string str1, str2;
    cout << "Enter String 1" << endl;
    cin >> str1;

    cout << "Enter String 2" << endl;
    cin >> str2;

    vector<int> freq(256, 0);

    for (char ch : str1) {
        int ascii = ch;
        freq[ascii]++;
    }

    cout << "Common Characters Are: " << endl;
    for (char ch : str2) {
        int ascii = ch;
        if (freq[ascii] > 0) {
            cout << ch << ", ";
        }
    }

    return 0;
}
