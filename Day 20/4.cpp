/* Problem: Write a program to Find column-wise sum. */
/*
Approach:
1. I will take rows, columns and matrix elements.
2. I will add all elements of each column.
3. Then I will display sum of every column.
TC:O(R*C)
SC:O(R*C)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter Rows and Columns" << endl;
    cin >> rows >> columns;
    vector<vector<int>> matrix(rows, vector<int>(columns));
    cout << "Enter Matrix Elements" << endl;
    for (auto &row : matrix) for (int &value : row) cin >> value;

    for (int j = 0; j < columns; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += matrix[i][j];
        cout << "Sum of Column " << j + 1 << " is " << sum << endl;
    }
    return 0;
}
