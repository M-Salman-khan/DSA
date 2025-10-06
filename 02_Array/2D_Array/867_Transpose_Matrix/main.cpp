#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
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