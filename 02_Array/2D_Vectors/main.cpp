#include<iostream>
#include<vector>
using namespace std;
int main(){
    // cout<<"Hello world";
    vector<vector<int>> arr={
        {1,2,0},
        {3,4,5},
        {5,6,9}
    };
    for(int i=0;i<arr.size();i++) {
        for(int j=0;j<arr[i].size();j++) cout<<arr[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}