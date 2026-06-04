/*
Problem: Write a program to Print prime numbers in a range.
*/


/*
Approach:
1. I will take input range from the user (start and end).
2. For each number in the range, I will check if it is prime.
3. To check prime, I will run loop from 2 to sqrt(N).
4. If number is not divisible by any, print it.
TC:O(N*sqrt(N))
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Start: ";
    int start;
    cin>>start;

    cout<<"Enter End: ";
    int end;
    cin>>end;

    cout<<"Prime Numbers in range: "<<endl;

    for(int num = start; num <= end; num++){
        bool isPrime = true;

        if(num <= 1){
            isPrime = false;
        }
        else{
            for(int i = 2; i * i <= num; i++){
                if(num % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }

        if(isPrime){
            cout<<num<<endl;
        }
    }

    return 0;
}
