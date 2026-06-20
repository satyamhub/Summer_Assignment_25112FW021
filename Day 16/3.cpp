/*
Problem: Write a program to Find pair with given sum.
*/

/*
Approach:
1. I will take input of the array and target sum from the user.
2. I will store visited elements in a set.
3. If target-current element is present, I will print the pair.

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
    cout << "Enter the Value of Array Elements" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter the Target Sum" << endl;
    cin >> target;

    unordered_set<int> visited;
    bool found = false;
    for (int value : arr) {
        int required = target - value;
        if (visited.count(required)) {
            cout << "Pair is " << required << " " << value;
            found = true;
            break;
        }
        visited.insert(value);
    }

    if (!found) cout << "Pair Not Found";
    return 0;
}
