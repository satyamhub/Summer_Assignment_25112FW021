/*
Problem: Write a program to Write function for perfect
number.

*/

/*
Approach:
1. I will Take the input from the user to check the perfect number.
2. Then i will call the function.
3. Function will extract the divisor the number except the number itself.
4. Also it will sum the divisor in Divisorsum variable.
5. If Original number equal to divisorsum, the it will return true.

TC:(Sqrt(Num))
Sc:O(1)

*/


//code

#include <bits/stdc++.h>
using namespace std;


bool perfect(int num){
    int DivisorSum = 0;
    for (int i = 1; i * i < num; i++) {
        if (num % i == 0) {
            DivisorSum += i;
            if (i != num / i) {
                DivisorSum += i;
            }
        }
    }

    return DivisorSum == num;
}

int main() {

    int num;
    cout << "Enter the Number to Check if it is Perfect or not" << endl;
    cin >> num;

    if(perfect(num)){
        cout << "Entered Number is Perfect Number";
    }else{
        cout << "Entered Number is Not Perfect Number";
    }

    return 0;
}
