/* Problem: Write a program to Multiply matrices. */
/*
Approach:
1. I will take dimensions and elements of two matrices.
2. I will check if first matrix columns equal second matrix rows.
3. I will multiply rows of first matrix with columns of second matrix.
TC:O(R1*C1*C2)
SC:O(R1*C2)
*/

//code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row1, column1, row2, column2;
    cout << "Enter Rows and Columns of First Matrix" << endl;
    cin >> row1 >> column1;
    cout << "Enter Rows and Columns of Second Matrix" << endl;
    cin >> row2 >> column2;

    if (column1 != row2) {
        cout << "Matrix Multiplication is Not Possible";
        return 0;
    }

    vector<vector<int>> first(row1, vector<int>(column1));
    vector<vector<int>> second(row2, vector<int>(column2));
    vector<vector<int>> result(row1, vector<int>(column2, 0));

    cout << "Enter First Matrix Elements" << endl;
    for (auto &row : first) for (int &value : row) cin >> value;
    cout << "Enter Second Matrix Elements" << endl;
    for (auto &row : second) for (int &value : row) cin >> value;

    for (int i = 0; i < row1; i++)
        for (int j = 0; j < column2; j++)
            for (int k = 0; k < column1; k++)
                result[i][j] += first[i][k] * second[k][j];

    cout << "Multiplication of Matrices is" << endl;
    for (auto &row : result) {
        for (int value : row) cout << value << " ";
        cout << endl;
    }
    return 0;
}
