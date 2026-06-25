/*
Problem: Write a program to Merge two sorted arrays.
*/

/*
Approach:
1. I will take the input of both the sorted array from the user.
2. Then I will assign two pointer one at the 1st array and other at the 2nd array.
3. I will check which element is smaller from both the array and i will push that element
   in ans array.

TC:O(M+N)
SC:O(1)
*/


#include <bits/stdc++.h>
using namespace std;


int main() {




    int m, n;
    cout << "Enter the Size of the Array 1 in sorted" << endl;
    cin >> n;
    vector<int> arr1;
    cout << "Enter the elements of the array 1"<<endl;
    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        arr1.push_back(q);
    }
    cout << "Enter the Size of the Array 2 in sorted" << endl;
    cin >> m;
    vector<int> arr2;
    cout << "Enter the elements of the array 2" << endl;
    for (int i = 0; i < m; i++) {
        int q;
        cin >> q;
        arr2.push_back(q);
    }

    vector<int> ans;

    int p1= 0;
    int p2 = 0;

    while(p1<n && p2<m){
        if(arr1[p1]<=arr2[p2]){
            ans.push_back(arr1[p1]);
            p1++;
        }else{
            ans.push_back(arr2[p2]);
            p2++;
        }
    }

    while(p1<n){
        ans.push_back(arr1[p1]);
        p1++;
    }
    while (p2 < n) {
        ans.push_back(arr1[p2]);
        p2++;
    }
    cout << "Merged Sorted Array is ";
    for (int i = 0; i < m + n; i++) {
        cout << ans[i] << " ";
    }

        return 0;
}
