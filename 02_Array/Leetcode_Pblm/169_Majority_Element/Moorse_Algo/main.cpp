#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Majority_El(vector <int>arr){
    //Moorese approach
    int n = arr.size();
    int freq=0,ans = 0;
    for(int i=0;i<n;i++){
        if(freq==0) ans=arr[i];
        if(ans==arr[i]) freq++;
        else freq--;
    }

    // If majority elements is not presents
    int count = 0;
    for(int val:arr){
        if(val==ans) count++;
    }
    if(count>n/2) return ans;
    else return -1;
    return ans;
}
int main(){
    vector <int>arr = {1,2,2,1,1,2,2};
    cout<<Majority_El(arr);
    return 0;
}