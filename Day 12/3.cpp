/*
Problem: Write a program to Write function for
Fibonacci.

*/


/*
Approach:
1. Take the index up to which Fibonacci numbers are to be printed.
2. Call the fibbo() function for each index.
3. Return 0 for i == 0 and 1 for i == 1.
4. Otherwise return fibbo(i-1) + fibbo(i-2).

TC: O(2^N)
SC: O(N)
*/



//code


#include <bits/stdc++.h>
using namespace std;

int fibbo(int i){
    if(i==0)
        return 0;
    if(i==1)
        return 1;

    return fibbo(i - 1) + fibbo(i - 2);
}

int main() {

    int num;
    cout << "Enter the Index upto for Fibbonacii Series" << endl;
    cin >> num;

    for (int i = 0; i <= num; i++){
        cout << fibbo(i)<<endl;
    }

        return 0;
}
