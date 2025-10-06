#include<iostream>
#include<string>
#include<vector>
using namespace std;
int binarySearch(vector <int>arr){
    int n=arr.size();
    int st=1,end=n-2;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid-1]<arr[mid]&&arr[mid]>arr[mid+1]) return mid; //Right
        else if(arr[mid-1]<arr[mid]) st=mid+1; //Left
        else end=mid-1;
    }
    return -1;
}
int main(){
    vector<int>arr={0,10,5,2};
    cout<<binarySearch(arr);
    return 0;
}