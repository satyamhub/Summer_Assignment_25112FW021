/*
Problem: Write a program to Reverse a number.
*/

/*
Approach:
1. I will take input from the user.
2. I will run a while loop and keep dividing the number by 10.
3. Each time I extract the last digit using modulo operator.
4. I will multiply reversed by 10 and add the digit.
5. Then I will display the reversed number.
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    int reversed = 0;
    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    cout << "Reversed Number: " << reversed << endl;

    return 0;
}
