/*
Problem: Write a program to Find sum of digits of a number.
*/


/*
Approach:
1. I will take input from the user.
2. I will run a while loop and keep dividing the number by 10.
3. Each time I extract the last digit using modulo operator and add it to sum.
4. Then I will display the total sum of digits.
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    int sum = 0;
    while(num > 0){
        int digit = num % 10;
        sum += digit;
        num = num / 10;
    }

    cout<<"Sum of Digits: "<<sum<<endl;

    return 0;
}
