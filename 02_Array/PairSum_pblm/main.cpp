#include<iostream>
#include<vector>
using namespace std;
vector<int>pairSum(vector<int> nums,int target){//Big0 (n)
    vector<int> arr;
    int n=nums.size();
    int i=0,j=n-1;
    while(i<j){
        int pair_Sum=nums[i]+nums[j];
        if(pair_Sum>target){
            j--;
        }
        else if(pair_Sum<target){
            i++;
        }
        else{
            arr.push_back(i);
            arr.push_back(j);
            return arr;
        }
    }
    return arr;
}
int main(){
    vector <int>nums = {2,7,11,15};
    int target = 26;
    vector<int> arr = pairSum(nums,target);
    cout<<"Index : "<<arr[0]<<" and "<<arr[1]<<endl;

    // normal approach - Time complexity : (n*n)

    
    // for(int i=0;i<arr.size();i++){
    //     for(int j=i+1;j<arr.size();j++){
    //         if(arr[i]+arr[j]==target){
    //             cout<<"Index : "<<i<<" and "<<j<<endl;
    //         }
    //     }
    // }

    return 0;
}