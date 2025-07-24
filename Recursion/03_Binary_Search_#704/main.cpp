#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int binarySearch(vector<int>arr,int target,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==target) return mid;
        else if(arr[mid]>target) return binarySearch(arr,target,st,mid-1);
        else return binarySearch(arr,target,mid+1,end);
    }
    return -1;
}
int binary(vector<int>arr,int target){
    sort(arr.begin(),arr.end());
    int st=0,end=arr.size();
    return binarySearch(arr,target,st,end);
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    int target=6;
    cout<<binary(arr,target);
    return 0;
}
