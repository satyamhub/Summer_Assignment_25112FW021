/*
Program: Write a program to Find maximum occurring
character.
*/

/*
Approach:
1. I will take the input from the user of the string.
2. Than i will creat an array to note the fequency of each char.
3. the i will itterate through the array and check for max freq and its char.


TC:O(N)
SC:O(256)


*/


//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    string str;
    cout << "Enter the string" << endl;
    cin >> str;

    vector<int> freq(256, 0);

    int n = str.size();

    for (int i = 0; i < n; i++) {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = char(i);
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxFreq << endl;

    return 0;
}
