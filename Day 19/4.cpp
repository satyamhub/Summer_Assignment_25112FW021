/* Problem: Write a program to Find diagonal sum. */
/*
Approach:
1. I will take input of a square matrix.
2. I will add primary and secondary diagonal elements.
3. I will subtract centre element once for odd size matrix.
TC:O(N)
SC:O(N*N)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of Square Matrix" << endl;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter Matrix Elements" << endl;
    for (auto &row : matrix) for (int &value : row) cin >> value;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
        if (i != n - i - 1) sum += matrix[i][n - i - 1];
    }

    cout << "Diagonal Sum is " << sum;
    return 0;
}
