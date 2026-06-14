/*
Problem: Write a program to Frequency of an element.
*/

/*
Approach:
1. I will take the input of the size of the array from the user.
2. Create an Array of that size.
3. Run the loop from i=0 to n-1, to take the input in the array.
4. I will take the element from the user to find frequency.
5. Then I will count how many times that element is present in array.

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

    int element;
    cout << "Enter the Element to Find Frequency" << endl;
    cin >> element;

    int frequency = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    cout << "Frequency of Element is " << frequency;

    return 0;
}
