/* Problem: Write a program to Sort array in descending order. */
/*
Approach:
1. I will take input of the array from the user.
2. I will sort the array using greater comparator.
3. Then I will display the array.
TC:O(NlogN)
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

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Array in Descending Order is" << endl;
    for (int value : arr) cout << value << " ";
    return 0;
}
