/*
Problem: Write a program to Check whether a number is prime.
*/

/*
Approach:
1. I will take input from the user.
2. I will run a loop from 2 to sqrt(N).
3. If number is divisible by any number in range, it is not prime.
4. Otherwise it is prime.
TC:O(sqrt(N))
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "Number is Prime" << endl;
    } else {
        cout << "Number is Not Prime" << endl;
    }

    return 0;
}
