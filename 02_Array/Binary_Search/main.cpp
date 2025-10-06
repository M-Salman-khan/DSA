#include<iostream>
#include<string>
#include<vector>
using namespace std;
int binarySearch(vector <int> arr,int target){
    int st=0,end=arr.size()-1;
    while(st<=end){
        int mid=st+(end-st)/2; //mid = (st+end)/2
        if(target>arr[mid]) st=mid+1;
        else if(target<arr[mid]) end=mid-1;
        else return mid;
    }
    return -1;
}
int main(){
    vector <int>arr={-1,5,6,7,23,8,12};
    cout<<"Target found on index : "<<binarySearch(arr,6);
    return 0;
}