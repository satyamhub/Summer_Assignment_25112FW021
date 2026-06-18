/*
Problem: Write a program to Rotate array Right.

*/

/*
Approach:
1. I will take input of the array from the user.
2. I will take the input from the user for k position.
3. I will call a function which left rotates the array by k position.
4. The function will reverse the array from 0 to n-1,
  then reverse 0 to k-1, and finally it will reverse k to n-1.


TC:O(N)
SC:(1)

*/

// code

#include <bits/stdc++.h>
using namespace std;

void reverseRange(vector<int> &arr, int left, int right) {
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void rightRotateByKOptimal(vector<int> &arr, int k) {
    int n = static_cast<int>(arr.size());
    k %= n;

    reverseRange(arr, 0, n - 1);
    reverseRange(arr, 0, k - 1);
    reverseRange(arr, k, n - 1);
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    rightRotateByKOptimal(arr, k);

    for (int value : arr) {
        cout << value << ' ';
    }
    cout << '\n';

    return 0;
}
