/*
Problem: Write a program to Find product of digits.
*/


/*
Approach:
1. I will take input from the user.
2. I will run a while loop and keep dividing the number by 10.
3. Each time I extract the last digit using modulo operator and multiply it to product.
4. Then I will display the total product of digits.
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    int product = 1;
    while(num > 0){
        int digit = num % 10;
        product *= digit;
        num = num / 10;
    }

    cout<<"Product of Digits: "<<product<<endl;

    return 0;
}
