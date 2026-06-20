/* Problem: Write a program to Transpose matrix. */
/*
Approach:
1. I will take rows, columns and matrix elements.
2. I will interchange row and column indexes.
3. Then I will display the transpose matrix.
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

    cout << "Transpose Matrix is" << endl;
    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) cout << matrix[i][j] << " ";
        cout << endl;
    }
    return 0;
}
