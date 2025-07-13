#include<iostream>
#include<vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) { //output should be [1,3,6,10]
        //Brute force
        int index=1,n=nums.size(),sum=nums[0];
        vector <int>arr(nums.size(),0);
        arr[0]=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            arr[i] = sum;
        }
        return arr; 

        // Optimize approach
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]=nums[i-1]+nums[i];
        }
        return nums;
    }
int main(){
    vector<int>nums = {1,2,3,4};
    vector <int>arr = runningSum(nums);
    for(int val:arr)cout<<val<<" ";
    return 0;
}