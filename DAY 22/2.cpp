/*
Problem: Write a program to Count words in a
sentence.
*/

/*
Approach:
1. I will get the input of the sentence from the user.
2. Then i will run a while loop till str[i]!='\0'.
3. Then i will start counting the spaces.
4. Then i will return number of space+1 as number of words.

TC:O(N)
SC:O(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    char str[100];
    cout << "Enter the Sentence" << endl;
    cin.getline(str, 100);

    int cnt = 1;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ' ') {
            cnt++;
        }
        i++;
    }

    cout << "Number of words is " << cnt << endl;

    return 0;
}
