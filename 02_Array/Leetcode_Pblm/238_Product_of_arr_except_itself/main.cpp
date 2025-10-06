// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]

#include<iostream>
#include<vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n=nums.size();
    vector<int>arr(n,1);

    // Brute Force Approach O(n^2)

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if(i!=j)
    //         arr[i]*=nums[j];
    //     }
    // }
    // return arr;

    // Optimal Approach O(n)

    // vector <int>prefix(n,1);
    // vector <int>suffix(n,1);
    int prefix=1,suffix=1;
    
    for(int i=1;i<n;i++){

        arr[i]=arr[i-1]*nums[i-1];
    }

    for(int i=n-2;i>=0;i--){
        suffix*=nums[i+1];
        arr[i]*=suffix;
    }

    // for(int i=0;i<n;i++){
    //     arr[i]=prefix[i]*suffix[i];
    // }
    return arr;
}
int main(){
    // cout<<"Hello world";
    vector<int>arr={1,2,3,4};
    vector <int>productArray = productExceptSelf(arr);
    for(int i=0;i<productArray.size();i++)cout<<productArray[i]<<" ";
    return 0;
}