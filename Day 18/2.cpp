/* Problem: Write a program to Selection sort. */
/*
Approach:
1. I will take input of the array from the user.
2. I will find smallest element from unsorted part.
3. I will place it at its correct position.
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
        int smallest = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) smallest = j;
        }
        swap(arr[i], arr[smallest]);
    }

    cout << "Sorted Array is" << endl;
    for (int value : arr) cout << value << " ";
    return 0;
}
