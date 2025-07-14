#include<iostream>
#include<vector>
using namespace std;
bool searchInRow(vector<vector<int>>& matrix,int target, int mid){
        int n=matrix[0].size();
        int st=0,end=n-1;
        while(st<=end){
            int Mid=st+(end-st)/2;
            if(target==matrix[mid][Mid]) return true;
            else if(target>matrix[mid][Mid]) st=Mid+1;
            else end=Mid-1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int st=0,end=m-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(target>=matrix[mid][0] and target<=matrix[mid][n-1]) return searchInRow(matrix,target,mid);
            else if(target>matrix[mid][n-1]) st=mid+1;
            else end=mid-1;
        }
        return false;
    }
int main(){
    vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
    cout<<searchMatrix(matrix,10)<<endl;
    return 0;
}