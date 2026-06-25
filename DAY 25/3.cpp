/*
Problem: Write a program to Sort names
alphabetically.
*/

/*
Approach:
1. I will take the input of both the string.
2. I will itterate through both the string and compare the character.
3. Whose character comes first alphabetically i will write 1st and other 2nd.

TC:O(min(m+n))
SC:O(1)

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

    int i = 0;
    int m = str1.size();
    int n = str2.size();

    while (i < m && i < n) {
        int ch1 = str1[i];
        int ch2 = str2[i];
        if (ch1 < ch2) {
            cout << str1 << endl
                 << str2;
            return 0;
        } else if (ch1 > ch2) {
            cout << str2 << endl
                 << str1;
            return 0;
        }
        i++;
    }

    cout << str1 << endl
         << str2;

    return 0;
}
