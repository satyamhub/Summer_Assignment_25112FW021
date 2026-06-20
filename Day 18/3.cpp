/* Problem: Write a program to Binary search. */
/*
Approach:
1. I will take input of a sorted array and target element.
2. I will compare target with middle element.
3. I will reduce search range until target is found.
TC:O(logN)
SC:O(1)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of the Sorted Array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Sorted Array Elements" << endl;
    for (int &value : arr) cin >> value;

    int target;
    cout << "Enter the Element to Search" << endl;
    cin >> target;

    int left = 0, right = n - 1, index = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            index = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (index == -1) cout << "Element Not Found";
    else cout << "Element Found at Position " << index + 1;
    return 0;
}
