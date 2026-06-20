/* Problem: Write a program to Bubble sort. */
/*
Approach:
1. I will take input of the array from the user.
2. I will compare adjacent elements and swap if they are in wrong order.
3. I will repeat it until the array is sorted.
TC:O(N*N)
SC:O(1)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of the array" << endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Value of Array Elements" << endl;
    for (int &value : arr) cin >> value;

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }

    cout << "Sorted Array is" << endl;
    for (int value : arr) cout << value << " ";
    return 0;
}
