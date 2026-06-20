/*
Problem: Write a program to Find maximum frequency element.
*/

/*
Approach:
1. I will take input of the array from the user.
2. I will store frequency of each element in a map.
3. I will print the element having maximum frequency.

TC:O(N)
SC:O(N)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of the array" << endl;
    cin >> n;

    vector<int> arr(n);
    unordered_map<int, int> frequency;
    cout << "Enter the Value of Array Elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        frequency[arr[i]]++;
    }

    int element = arr[0];
    for (int value : arr) {
        if (frequency[value] > frequency[element]) {
            element = value;
        }
    }

    cout << "Maximum Frequency Element is " << element << endl;
    cout << "Frequency is " << frequency[element];
    return 0;
}
