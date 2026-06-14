/*
Problem: Write a program to Second largest element.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. I will sort the array.
5. Then I will print the second last element of array.

TC:O(NlogN)
SC:O(N)

*/


//code

#include <bits/stdc++.h>
using namespace std;


int main() {

    int n;
    cout << "Enter the Size of the array" << endl;
    cin >> n;

    int arr[n];

    cout << "Enter the Value of Array Elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << "Second Largest Element is " << arr[n - 2];

    return 0;
}
