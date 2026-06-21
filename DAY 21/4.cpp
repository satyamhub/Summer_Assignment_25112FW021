/*
Problem: Write a program to Convert lowercase to
uppercase.

*/

/*
Approach:
1. I will take input from the user of the string.
2. Then i will run a loop for each character in the string.
3. I will do xor with 32 if the character is in lower case alphabet.

TC:O(N)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter The String" << endl;
    cin >> str;

    int n = str.size();

    for (int i = 0; i < n; i++){
        int ch = str[i];
        if(ch>=97 && ch<=122){
            str[i] = str[i] ^ 32;
        }
    }

    cout << str;

    return 0;
}
