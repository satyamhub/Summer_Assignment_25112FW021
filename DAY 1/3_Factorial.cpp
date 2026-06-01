/*
Problem: Find the factorial of a number.
*/


/*
Approach:1
1. I will take input from the user.
2. I run loop from 1 to N and multilpy each time.
3. Then i will display factorial.
*/

//code

#include <bits/stdc++.h>
using namespace std;

int approach1(int num){
    if (num==1) return 1;
    if (num==0) return 0;
    return approach1(num*num-1);
}

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    cout<<approach1(num);


    return 0;
}