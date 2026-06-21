/*
Problem: Write a program to Count vowels and
consonants.

*/

/*
Approach:
1. I will take input from the user of the string.
2. I will assign a cnt variable to count the number of vowels.
3. Then Number of vowels=cnt and cononant=strLenght-cnt

TC:O(N)
SC:O(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cout << "Enter String" << endl;
    cin >> str;

    int cnt = 0;
    int n = str.size();

    for (int i = 0; i < n; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u') {
            cnt++;
        }
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U') {
            cnt++;
        }
    }

    cout << "Vowels=" << cnt << " And Consonant=" << n - cnt << endl;

    return 0;
}
