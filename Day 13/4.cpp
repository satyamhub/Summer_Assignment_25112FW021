/*
Problem: Write a program to Count even and odd
elements.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. I will check if element is divisible by 2 or not.
5. If it is divisible by 2 then increase even count else odd count.

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
    int even = 0;
    int odd = 0;

    cout << "Enter the Value of Array Elements" << endl;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << "Total Even Elements are " << even << endl;
    cout << "Total Odd Elements are " << odd;

    return 0;
}
