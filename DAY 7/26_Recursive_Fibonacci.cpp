/*
Problem: Write a program to Recursive Fibonacci.
*/

/*
Approach:
1. I will create a recursive function that calculates Fibonacci number.
2. Base case: if n is 0 return 0, if n is 1 return 1.
3. Recursive case: return fib(n-1) + fib(n-2).
TC:O(2^N)
SC:O(N) due to recursive call stack
*/

// code

#include <bits/stdc++.h>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    cout << "Fibonacci: " << fibonacci(num) << endl;

    return 0;
}
