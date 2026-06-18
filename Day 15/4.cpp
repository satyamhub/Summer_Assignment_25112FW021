/*
Problem:Write a program to Move zeroes to end.
*/

/*
Approach:
1. I will take input from the user of the array.
2. Then i will run a loop to find non zero number so that i will move forward.
3. Then i will display the updated array.

TC:O(N)
SC:O(1)



*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int j = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

        return 0;
}
