/* Problem: Write a program to Check symmetric matrix. */
/*
Approach:
1. I will take input of a square matrix.
2. I will compare matrix[i][j] with matrix[j][i].
3. If all are same then matrix is symmetric.
TC:O(N*N)
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

    bool symmetric = true;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) cout << "Matrix is Symmetric";
    else cout << "Matrix is Not Symmetric";
    return 0;
}
