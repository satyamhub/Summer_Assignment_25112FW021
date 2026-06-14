/*
Problem: Write a program to Find sum and average of
array.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. Also I will add each element in sum variable.
5. Then I will find the average by dividing sum with size of the array.

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
    int sum = 0;

    cout << "Enter the Value of Array Elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float average = (float)sum / n;

    cout << "Sum of Array Elements is " << sum << endl;
    cout << "Average of Array Elements is " << average;

    return 0;
}
