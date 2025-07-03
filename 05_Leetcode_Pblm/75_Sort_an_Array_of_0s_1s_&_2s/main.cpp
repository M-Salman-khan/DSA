#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColors(vector<int>& nums) {
        int n=nums.size();

        // Brute force approach

        // int count1=0,count2=0,count3=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0) count1++;
        //     else if(nums[i]==1) count2++;
        //     else count3++;
        // }
        // int index=0;
        // for(int i=0;i<count1;i++){
        //     nums[index++]=0;
        // }
        // for(int i=0;i<count2;i++){
        //     nums[index++]=1;
        // }
        // for(int i=0;i<count3;i++){
        //     nums[index++]=2;
        // }


        // Dutch National Flag Algorithm (DNF) [Optimal Approach]

        int mid=0,high=n-1,low=0;
        while(mid<=high){
            if(nums[mid]==0){
                // swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1) mid++;
            else {
                swap(nums[high],nums[mid]);
                high--;
            }
        }
        return nums;
    }
int main(){
    // cout<<"Hello world";
    vector<int>arr={2, 0, 1};
    vector<int>sortedColors = sortColors(arr);
    for(int i=0;i<sortedColors.size();i++)cout<<sortedColors[i]<<" ";
    return 0;
}