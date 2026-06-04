/*
Problem: Write a program to Print Armstrong numbers in a range.
*/


/*
Approach:
1. I will take range from the user (start and end).
2. For each number in the range, I will check if it is Armstrong.
3. To check Armstrong, I count digits and sum each digit raised to power of count.
4. If sum equals the number, print it.
TC:O(N*log N)
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

    cout<<"Armstrong Numbers in range: "<<endl;

    for(int num = start; num <= end; num++){
        int original = num;
        int count = 0;
        int temp = num;

        // Count number of digits
        while(temp > 0){
            count++;
            temp = temp / 10;
        }

        int sum = 0;
        temp = num;

        // Sum of digits raised to power of count
        while(temp > 0){
            int digit = temp % 10;
            sum += pow(digit, count);
            temp = temp / 10;
        }

        if(sum == original){
            cout<<num<<endl;
        }
    }

    return 0;
}
