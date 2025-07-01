#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
vector <int>bubbleSort(vector <int> arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool isSwap = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap) return;
    }
    return arr;
}
int main(){
    vector <int>arr={3, -2, -1, 5, 0};
    vector <int>returnArr = bubbleSort(arr);
    for(int i=0;i<returnArr.size();i++){
        cout<<returnArr[i]<<" ";
    }
    return 0;
}