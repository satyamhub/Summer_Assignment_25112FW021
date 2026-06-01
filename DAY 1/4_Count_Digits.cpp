/*
Problem: Write a program to Count digits in a number.
*/

/*
Approach 1:
1. I will take input from the user.
2. I will run a while loop and keep dividing the number by 10.
3. Each time I divide, I increment the count.
4. Then I will display the total count.
*/

/*
Approach 2:
1. Number of digit=log10(Num)+1
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    int count = 0;
    while (num > 0) {
        count++;
        num = num / 10;
    }

    cout << "Total Digits: " << count << endl;

    return 0;
}
