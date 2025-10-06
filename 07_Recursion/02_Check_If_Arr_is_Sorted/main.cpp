#include<iostream>
#include<vector>
using namespace std;
bool isSorted(vector<int>arr,int n){
    if (n<2) return true;
    return arr[n-2]<=arr[n-1] && isSorted(arr,n-1);
}
int main(){
    vector<int>arr = {1,8,2,4,5};
    if(isSorted(arr,arr.size())) cout<<"Sorted";
    else cout<<"Unsorted";
    return 0;
}