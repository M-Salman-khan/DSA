#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Majority_El(vector <int>arr){
    //Optimize approach
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int freq=1,ans = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]) freq++;
        else{
            freq=1;
            ans = arr[i];
        }
        if(freq>n/2) return ans;
    }
    return -1;
}
int main(){
    vector <int>arr = {1,2,2,1,1,2,2};
    cout<<Majority_El(arr);
    return 0;
}