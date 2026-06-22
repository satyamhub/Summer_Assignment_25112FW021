/*
Problem: Write a program to Remove spaces from
string.
*/

/*
Approach:
1. I will get input of the string from the user.
2. I will iterate through the string and insert all the charcater except space in the result string.

TC:O(size of str)
SC:O(1)


*/


//code

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, result = "";

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (ch != ' ') {
            result += ch;
        }
    }

    cout << "String after removing spaces: " << result << endl;

    return 0;
}
