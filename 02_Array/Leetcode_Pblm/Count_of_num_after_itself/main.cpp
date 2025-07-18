// Given an integer array nums, return an integer array counts where counts[i] is the number of smaller elements to the right of nums[i].

 

// Example 1:

// Input: nums = [5,2,6,1]
// Output: [2,1,1,0]
// Explanation:
// To the right of 5 there are 2 smaller elements (2 and 1).
// To the right of 2 there is only 1 smaller element (1).
// To the right of 6 there is 1 smaller element (1).
// To the right of 1 there is 0 smaller element.
// Example 2:

// Input: nums = [-1]
// Output: [0]
// Example 3:

// Input: nums = [-1,-1]
// Output: [0,0]
 

// Constraints:

// 1 <= nums.length <= 105
// -104 <= nums[i] <= 104


#include<iostream>
#include<vector>
using namespace std;
vector<int> countSmaller(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            int count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]>nums[j]) count++;
            }
            arr.push_back(count);
        }
        
        return arr;
}
int main(){
    vector<int>arr={5,2,6,1};
    cout<<"Original Array\n";
    for(int val:arr) cout<<val<<" ";
    cout<<endl;
    vector<int>array=countSmaller(arr);
    cout<<"Count array\n";
    for(int val:array) cout<<val<<" ";
    return 0;
}