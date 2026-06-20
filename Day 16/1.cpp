/*
Problem: Write a program to Find missing number in array.
*/

/*
Approach:
1. I will take input n, where numbers are from 1 to n.
2. I will take n-1 array elements from the user.
3. I will subtract array sum from sum of numbers 1 to n.

TC:O(N)
SC:O(N)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Maximum Number" << endl;
    cin >> n;

    vector<int> arr(n - 1);
    cout << "Enter the Array Elements" << endl;
    long long arraySum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        arraySum += arr[i];
    }

    long long totalSum = 1LL * n * (n + 1) / 2;
    cout << "Missing Number is " << totalSum - arraySum;
    return 0;
}
