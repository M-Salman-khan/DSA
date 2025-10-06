#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int n=matrix[0].size(),m=matrix.size();
        int r=0,c=n-1;
        while(r<m and c>=0){
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]>target) c--;
            else r++;
        }
        return false;
}
int main(){
    vector<vector<int>>matrix ={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<searchMatrix(matrix,19);
    return 0;
}