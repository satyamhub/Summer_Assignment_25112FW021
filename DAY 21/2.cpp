/*
Problem: Write a program to Reverse a string.
*/

/*
Approach:
1. I will take the string input from the user.
2. Then i will assign two pointer , one from the start and one from the end.
3. Then i will iterate from the both end while swapping each other value.
  till it crosses eachother.
4. Then i will display the reversed string.


TC:O(N/2)
SC:O(1)


*/

//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    string str;
    cout << "Enter the string" << endl;
    cin>>str;

    int low = 0;
    int high = str.length() - 1;

    while(low<high){
        swap(str[low++], str[high--]);
    }
    cout << "Revered is "<<str << endl;

    return 0;
}
