#include<iostream>
#include<string>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>>arr(n,vector<int>(m));
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) arr[j][i]=matrix[i][j];
        return arr;
}
int main(){
    vector<vector<int>> arr = {{1, 2, 3},{4, 5, 6}};
    vector<vector<int>> result = transpose(arr);
    cout << "Transposed Matrix:" << endl;
    for(const auto& row : result) {
        for(int val : row) cout << val << " ";
        cout << endl;
    }
    return 0;
}