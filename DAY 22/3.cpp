/*
Problem: Write a program to Character frequency.
*/

/*
Approach:
1. I will get the input of the string from the user.
2. I will an array of 256 size with elements equal to zero to put the freq of each char.
3. I will iterate through the string and Add 1 each time to the ascii value of char in the array.
4. Then i will run loop from 1 to 256 and return the Freq of each character which is non zero.


TC:O(N)+O(256)
SC:O(256)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter the String" << endl;
    cin >> str;

    vector<int> freq(256, 0);

    int n = str.size();

    for (int i = 0; i < n; i++){
        freq[str[i]]++;
    }

    for (int i = 0; i <= 256; i++){
        if(freq[i]!=0){
            char ch = i;
            cout << ch << " : " << freq[i] << endl;
        }
    }

    return 0;
}
