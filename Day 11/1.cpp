/*
Problem: Write a program to Write function to find sum
of two numbers.


*/


/*
Approach:
1. I will take two number as input from the user.
2. then i will call the sum function.
3. the sum function will return the sum of both number.

TC:O(1)
SC:O(1)
*/

// code

#include <bits/stdc++.h>

using namespace std;

int sum(int a, int b){
    return a + b;
}

int main() {

    int a, b;
    cout << "Enter Two Numbers for finding Sum" << endl;
    cin >> a;
    cin >> b;

    cout<<"Sum is "<<sum(a, b);

    return 0;
}
