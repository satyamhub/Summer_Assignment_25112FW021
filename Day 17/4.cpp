/*
Problem: Write a program to Find common elements.
*/

/*
Approach:
1. I will take input of two arrays from the user.
2. I will compare every element of first array with second array.
3. I will print each common element only once.

TC:O(N*M)
SC:O(N)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the Size of First and Second Array" << endl;
    cin >> n >> m;

    vector<int> first(n), second(m), common;
    cout << "Enter First Array Elements" << endl;
    for (int &value : first) cin >> value;
    cout << "Enter Second Array Elements" << endl;
    for (int &value : second) cin >> value;

    for (int value : first) {
        if (find(second.begin(), second.end(), value) != second.end() &&
            find(common.begin(), common.end(), value) == common.end()) {
            common.push_back(value);
        }
    }

    cout << "Common Elements are" << endl;
    if (common.empty()) cout << "No Common Elements";
    for (int value : common) cout << value << " ";
    return 0;
}
