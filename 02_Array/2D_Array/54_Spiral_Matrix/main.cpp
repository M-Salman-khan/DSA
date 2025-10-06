#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int stRow = 0, stCol = 0, endRow = m - 1, endCol = n - 1;
        vector<int> arr;
        while (stRow <= endRow && stCol <= endCol) {
            // top
            for (int i = stCol; i <= endCol; i++) {
                arr.push_back(mat[stRow][i]);
            }
            // right
            for (int i = stRow + 1; i <= endRow; i++) {
                arr.push_back(mat[i][endCol]);
            }
            // bottom
            for (int i = endCol - 1; i >= stCol; i--) {
                if (stRow == endRow) break;
                arr.push_back(mat[endRow][i]);
            }
            // left
            for (int i = endRow - 1; i > stRow; i--) {
                if (stCol == endCol) break;
                arr.push_back(mat[i][stCol]);
            }
            stRow++, endRow--, stCol++, endCol--;
        }
        return arr;
    }
};

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    vector<int> result = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
