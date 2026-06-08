/*
Problem: Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE
*/

/*
Approach
1. I will take input from the user upto which Character I have to print.
2. Then I will first change the character into its Alphabet index number.
3. Then i will run two nested loop.
4. 1st loop is for row and 2nd loop is for column.
5. Then i will intercast the j into alpha character.
6. Then i will print the character.

TC:O(N*(N+1)/2)
SC:O(1)


*/


#include <bits/stdc++.h>
using namespace std;


void characterTriangle(char ch){
    int n = ch-'A'+1;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            char p = 'A' + j -1;
            cout << p << " ";
        }
        cout << endl;
    }
}

int main() {

    char ch;
    cin >> ch;

    characterTriangle(ch);

    return 0;
}
