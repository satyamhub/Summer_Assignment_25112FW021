/*
Problem: Write a program to Find first repeating
character.

*/

/*
Approach:
1. I will take the input from the user as a string.
2. Then i will create an array of 256 size with all element 0.
3. Then i itterate through the string and increse the count
   of the char in array, Also i wil check if current char appears before.


TC:O(N)
SC:O(256)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cout << "Enter String" << endl;
    cin >> str;

    int n = str.size();
    vector<int> freq(256, 0);

    for (int i = 0; i < n; i++) {
        freq[str[i]]++;
        if(freq[str[i]]>1){
            cout << str[i] << endl;
            return 0;
        }
    }

    cout << "None" << endl;

    return 0;
}
