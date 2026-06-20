/*
Problem: Write a program to Intersection of arrays.
*/

/*
Approach:
1. I will take input of two arrays from the user.
2. I will store first array elements in a set.
3. I will print unique second array elements present in that set.

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

    unordered_set<int> first, printed;
    cout << "Enter First Array Elements" << endl;
    for (int i = 0, value; i < n; i++) {
        cin >> value;
        first.insert(value);
    }

    vector<int> answer;
    cout << "Enter Second Array Elements" << endl;
    for (int i = 0, value; i < m; i++) {
        cin >> value;
        if (first.count(value) && !printed.count(value)) {
            answer.push_back(value);
            printed.insert(value);
        }
    }

    cout << "Intersection of Arrays is" << endl;
    if (answer.empty()) cout << "No Common Elements";
    for (int value : answer) cout << value << " ";
    return 0;
}
