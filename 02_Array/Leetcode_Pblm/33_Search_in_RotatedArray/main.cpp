#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int>nums,int target){
    int end=nums.size()-1, st=0;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(nums[mid]==target) return mid;
        if(nums[st]<=nums[mid]){
            //left sorted array
            if(nums[st]<=target &&target<=nums[mid]) end=mid-1;
            else st=mid+1;
        }
        else{
            //Right sorted array
            if(nums[mid]<=target &&target<=nums[end])st=mid+1; 
            else end=mid-1;
        }
    }
    return -1;
}
int main(){
    vector <int>nums={4,5,6,7,0,1,2,3};
    cout<<binarySearch(nums,5);
    return 0;
}