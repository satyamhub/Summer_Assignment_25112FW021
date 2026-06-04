/*
Problem: Write a program to Find nth Fibonacci term.
*/


/*
Approach:
1. I will take n as input from the user.
2. I will use iteration to find the nth Fibonacci term.
3. I will keep updating previous two terms until I reach nth term.
4. Display the nth Fibonacci term.
TC:O(N)
SC:O(1)
*/

//code

#include <bits/stdc++.h>
using namespace std;

int main() {

    cout<<"Enter N: ";
    int n;
    cin>>n;

    int first = 0, second = 1;

    if(n == 1){
        cout<<"nth Fibonacci Term: "<<first<<endl;
    }
    else if(n == 2){
        cout<<"nth Fibonacci Term: "<<second<<endl;
    }
    else{
        for(int i = 2; i < n; i++){
            int third = first + second;
            first = second;
            second = third;
        }
        cout<<"nth Fibonacci Term: "<<second<<endl;
    }

    return 0;
}
