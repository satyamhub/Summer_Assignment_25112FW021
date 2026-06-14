/*
Problem: Write a program to Input and display array.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. I will then Display the Array.

TC:O(2N)
SC:O(N)


*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter the Size of the array"<<endl;
    cin >> n;

    int arr[n];

    cout << "Enter the Value of Array Elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++){
        cout << i + 1 << " Element is " << arr[i]<<endl;

    }

        return 0;
}
