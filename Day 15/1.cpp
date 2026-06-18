/*
Problem: Write a program to Reverse array.

*/

/*
Approach:
1. I will Take the input from the user for the size of the array.
2. I will take in input of the elemets of the array.
3. I will initialize two pointer one is from the start and one is from the end.
4. Then i will swap(arr[left], arr[right]) till left crosses right.

TC:O(N/2)
SC:O(1)

*/

//code

#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cout << "Enter the size of the array"<<endl;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    int left = 0;
    int right = n - 1;

    while(left<right){
        swap(arr[left++], arr[right--]);
    }

    cout << "Reversed Array is : "<< endl;

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

        return 0;
}
