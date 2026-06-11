/*
Problem: Write a program to Write function to find
maximum.


*/

/*
Approach:
1. I will take input from the user.
2. Call the maxi function for maximum.
3. Function will sort the array.
4. I will return the last element off array.

TC:O(NlogN)
SC:O(1)

*/

// code

#include <bits/stdc++.h>

using namespace std;


int maxi(vector<int> &arr){
    int n = arr.size();
    sort(arr.begin(), arr.end());
    return arr[n - 1];
}

int main() {

    cout << "Enter the numbers to find the maximum among them "<<endl;
    vector<int> arr;

    while(cin){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    cout << maxi(arr);

    return 0;
}
