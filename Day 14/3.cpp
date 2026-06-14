/*
Problem: Write a program to Second largest element.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. I will assume largest and second largest as minimum value.
5. Then I will compare each element and update largest and second largest.

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

    int arr[n];

    cout << "Enter the Value of Array Elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "Second Largest Element is Not Present";
    } else {
        cout << "Second Largest Element is " << secondLargest;
    }

    return 0;
}
