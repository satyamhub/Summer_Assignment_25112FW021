/*
Problem: Write a program to Generate Fibonacci series.
*/


/*
Approach:
1. I will take the number of terms as input from the user.
2. I will initialize first two terms as 0 and 1.
3. I will run a loop and generate remaining terms by adding previous two terms.
4. Display the Fibonacci series.
TC:O(N)
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter Number of Terms: ";
    int n;
    cin>>n;

    cout<<"Fibonacci Series: ";
    
    int first = 0, second = 1;
    cout<<first<<" "<<second<<" ";

    for(int i = 2; i < n; i++){
        int third = first + second;
        cout<<third<<" ";
        first = second;
        second = third;
    }

    cout<<endl;

    return 0;
}
