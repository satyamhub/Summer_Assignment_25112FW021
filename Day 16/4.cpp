/*
Problem: Write a program to Remove duplicates from array.
*/

/*
Approach:
1. I will take input of the array from the user.
2. I will use a set to check if element is already present.
3. I will print every element only once.

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

    vector<int> arr(n), answer;
    unordered_set<int> present;
    cout << "Enter the Value of Array Elements" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (!present.count(arr[i])) {
            answer.push_back(arr[i]);
            present.insert(arr[i]);
        }
    }

    cout << "Array after Removing Duplicates is" << endl;
    for (int value : answer) cout << value << " ";
    return 0;
}
