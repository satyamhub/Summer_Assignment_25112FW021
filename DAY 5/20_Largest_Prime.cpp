/*
Problem: Write a program to Find largest prime factor.
*/

/*
Approach:
1. I will take a number as input from the user.
2. I will find all factors of the number.
3. For each factor, I will check if it is a prime number.
4. I will keep track of the largest prime factor found.
TC:O(N * sqrt(N))
SC:O(1)
*/

// code

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    cout << "Enter Number: ";
    int num;
    cin >> num;

    int largestPrime = -1;

    // Find largest prime factor
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largestPrime = i;
        }
    }

    if (largestPrime != -1) {
        cout << "Largest prime factor is: " << largestPrime << endl;
    } else {
        cout << "No prime factors found" << endl;
    }

    return 0;
}
