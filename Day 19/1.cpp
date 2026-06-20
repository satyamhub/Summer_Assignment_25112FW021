/* Problem: Write a program to Add matrices. */
/*
Approach:
1. I will take rows, columns and elements of two matrices.
2. I will add corresponding elements.
3. Then I will display the result matrix.
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
    vector<vector<int>> first(rows, vector<int>(columns));
    vector<vector<int>> second(rows, vector<int>(columns));

    cout << "Enter First Matrix Elements" << endl;
    for (auto &row : first) for (int &value : row) cin >> value;
    cout << "Enter Second Matrix Elements" << endl;
    for (auto &row : second) for (int &value : row) cin >> value;

    cout << "Sum of Matrices is" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) cout << first[i][j] + second[i][j] << " ";
        cout << endl;
    }
    return 0;
}
