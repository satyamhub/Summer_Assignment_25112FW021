/*
Problem: Write a program to Find string length
without strlen().

*/

/*
Approach:
1. I will create an emoty character of length 100.
2. I will then take input of the string in the str array.
3. I will run a loop to check when str[length]==\0, then i will stop.

TC:O(N)
SC:O(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100];
    int length = 0;

    cout << "Enter a string: "<<endl;
    cin.getline(str, 100);

    // Count characters until null character
    while (str[length] != '\0') {
        length++;
    }

    cout << "Length of string = " << length;

    return 0;
}
