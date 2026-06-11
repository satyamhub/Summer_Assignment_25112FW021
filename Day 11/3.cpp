/*
Problem: Write a program to Write function to check
prime.

*/

/*
Approach:
1. I will take input from the user.
2. I will call the function to check prime.
3. It will return false if number is less than or equal to 1.
4. I will run loop from to 2 to square root of number.
5. if the num%i==0, then it is not prime and break the loop.
6. Else it is prime.

TC:O(Sqrt(Num))
Sc:O(1)
*/


//code

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if (num <= 1) {
        return false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                return false;
                break;
            }
        }
    }
    return true;
}

int main() {

    cout << "Enter number to check its Nature"<<endl;
    int num;
    cin >> num;

    if(isPrime(num)){
        cout << "It is a Prime Number";
    }else{
        cout << "It is not a Prime Number";
    }

    return 0;
}
