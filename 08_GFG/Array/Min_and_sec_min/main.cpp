#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> minAnd2ndMin(vector<int> &arr) {
    // code here
    // sort(arr.begin(),arr.end());
    int min=INT_MAX,secMin=INT_MAX;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            secMin=min;
            min=arr[i];
        }
        else if(arr[i]>min and arr[i]<secMin) secMin=arr[i];
    }
    if(secMin==INT_MAX) return {-1};
    return {min, secMin};
}
int main(){
    // vector<int>arr={2, 4, 3, 5, 6};
    vector<int>arr={2, 2, 2};

    vector<int>finalArr = minAnd2ndMin(arr);
    for(int val:finalArr) cout<<val<<" ";
    return 0;
}