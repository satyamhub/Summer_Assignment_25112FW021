/*
Problem: Write a program to Compress a string.
*/

/*
Approach:
1. I will take the input from the user of the string.
2. Then i will run a loop till the sentence end.
3. Push all the character in the ans string except the space ' '.

TC:O(N)
SC:O(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout << "Enter the string" << endl;
    cin.getline(str, 100);

    int i = 0;
    string ans;
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            ans.push_back(str[i]);
        }
        i++;
    }

    cout << "Compresses String is " << ans;

    return 0;
}
