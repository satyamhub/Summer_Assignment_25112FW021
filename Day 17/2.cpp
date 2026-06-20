/*
Problem: Write a program to Union of arrays.
*/

/*
Approach:
1. I will take input of two arrays from the user.
2. I will insert all elements into a set to remove duplicates.
3. Then I will display the union.

TC:O((N+M)log(N+M))
SC:O(N+M)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the Size of First and Second Array" << endl;
    cin >> n >> m;

    set<int> result;
    cout << "Enter First Array Elements" << endl;
    for (int i = 0, value; i < n; i++) {
        cin >> value;
        result.insert(value);
    }
    cout << "Enter Second Array Elements" << endl;
    for (int i = 0, value; i < m; i++) {
        cin >> value;
        result.insert(value);
    }

    cout << "Union of Arrays is" << endl;
    for (int value : result) cout << value << " ";
    return 0;
}
