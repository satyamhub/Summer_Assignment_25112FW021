/*
Problem: Write a program to Calculate sum of first N natural numbers.
*/

/*
Method 1: Brute Approach
1. I will Take input from the user.
2. THen i will run a loop from 1 to N.
3. Add add the sum=sum+i. in Sum variable.
4. Then I will print result.
TC:O(N)
SC:O(1)

*/

/*
Method 2: Optimal Approach
1. I will take input from the user.
2. I will use a maths formula to find the sum upto N numbers. Sn=N*(N+1)/2
3. Then I will Display Output
TC:O(1)
TC:O(1)
*/

#include <stdio.h>

int main() {

    int num, sum = 0;
    // Taking Input
    printf("Enter the number :");
    scanf("%d", &num);

    // Running Loop(Brute)
    // for (int i = 1; i <= num; i++) {
    //     sum += i;
    // }

    // Optimal Method
    sum = num * (num + 1) / 2;

    printf("\nSum Upto %d is %d", num, sum);
    return 0;
}