#include<iostream>
#include<vector>
using namespace std;

vector<int> sortColors(vector<int>& nums) {
        int n=nums.size();
        // Dutch National Flag Algorithm (DNF) [Optimal Approach]

        int mid=0,high=n-1,low=0;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
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
    vector<int>arr={2, 0, 1};
    vector<int>sortedColors = sortColors(arr);
    for(int i=0;i<sortedColors.size();i++)cout<<sortedColors[i]<<" ";
    return 0;
}