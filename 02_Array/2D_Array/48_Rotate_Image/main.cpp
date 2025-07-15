#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<vector<int>>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int k=0;k<n;k++){
            int i=0,j=n-1;
            while(i<j){
                swap(arr[k][i],arr[k][j]);
                i++;
                j--;
            }
        }
    }
int main(){
    vector<vector<int>>arr = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Before\n";
    for(int i=0;i<arr.size();i++) {for(int j=0;j<arr[0].size();j++) cout<<arr[i][j]<<" ";cout<<endl;}
    rotate(arr);
    cout<<"After\n";
    for(int i=0;i<arr.size();i++) {for(int j=0;j<arr[0].size();j++) cout<<arr[i][j]<<" ";cout<<endl;}
    return 0;
}