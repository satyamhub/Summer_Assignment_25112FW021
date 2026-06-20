/*
Problem: Write a program to Merge arrays.
*/

/*
Approach:
1. I will take input of two arrays from the user.
2. I will insert both arrays into a new array.
3. Then I will display the merged array.

TC:O(N+M)
SC:O(N+M)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the Size of First and Second Array" << endl;
    cin >> n >> m;

    vector<int> first(n), second(m), merged;
    cout << "Enter First Array Elements" << endl;
    for (int &value : first) cin >> value;
    cout << "Enter Second Array Elements" << endl;
    for (int &value : second) cin >> value;

    merged.insert(merged.end(), first.begin(), first.end());
    merged.insert(merged.end(), second.begin(), second.end());

    cout << "Merged Array is" << endl;
    for (int value : merged) cout << value << " ";
    return 0;
}
