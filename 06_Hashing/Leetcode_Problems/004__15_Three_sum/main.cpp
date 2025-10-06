#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threeSum(vector<int>& arr) {
    int n=arr.size();

    // set<vector<int>>uniqueTriplets;
    // for(int i=0;i<n;i++){
    //     int target=-arr[i];
    //     set<int>s;
    //     for(int j=i+1;j<n;j++){
    //         int third =target-arr[j] ;
    //         if(s.find(third)!=s.end()){
    //             vector<int>triplets = {arr[i],arr[j],third};
    //             sort(triplets.begin(),triplets.end());
    //             uniqueTriplets.insert(triplets);
    //         }
    //         s.insert(arr[j]);
    //     }
    // }
    // vector<vector<int>>ans(uniqueTriplets.begin(),uniqueTriplets.end());
    // return ans;

    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1,k=n-1;
        while(j<k){
            int sum=arr[i]+arr[k]+arr[j];
            if(sum>0) k--;
            else if(sum<0) j++;
            else {
                ans.push_back({arr[i],arr[j],arr[k]});
                j++,k--;
                while(j<k && arr[j]==arr[j-1]) j++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>arr={-1,0,1,2,-1,-4};
    vector<vector<int>>nums=threeSum(arr);
    for(auto val:nums){
        cout<<"[";
        for(int item:val) cout<<item<<" ";
        cout<<"]";
    }
    return 0;
}