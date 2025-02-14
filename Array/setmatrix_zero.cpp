#include <bits/stdc++.h>
using namespace std;

void markRowCol(vector<vector<int>> &matrix, int row, int col, int rows, int cols) {
    for (int i = 0; i < cols; i++) {
        if (matrix[row][i] != 0) {
            matrix[row][i] = -1;
        }
    }
    for (int i = 0; i < rows; i++) {
        if (matrix[i][col] != 0) {
            matrix[i][col] = -1;
        }
    }
}

vector<vector<int>> setZeroes(vector<vector<int>> &matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 0) {
                markRowCol(matrix, i, j, rows, cols);
            }
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    vector<vector<int>> result = setZeroes(matrix);
    for (auto row : result) {
        for (auto element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
