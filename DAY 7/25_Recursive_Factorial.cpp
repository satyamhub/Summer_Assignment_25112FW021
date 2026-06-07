/*
Problem: Write a program to Recursive factorial.
*/


/*
Approach:
1. I will create a recursive function that calculates factorial.
2. Base case: if n is 0 or 1, return 1.
3. Recursive case: return n * factorial(n-1).
TC:O(N)
SC:O(N) due to recursive call stack
*/

//code

#include <bits/stdc++.h>
using namespace std;

long long factorial(int n){
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {

    cout<<"Enter Number: ";
    int num;
    cin>>num;

    cout<<"Factorial: "<<factorial(num)<<endl;

    return 0;
}
