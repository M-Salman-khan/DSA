#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;
vector <int>selectionSort(vector <int> arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int smallestIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIndex]) smallestIndex=j;
        }
        swap(arr[i],arr[smallestIndex]);
    }
    return arr;
}
int main(){
    vector <int>arr={3, -2, -1, 5, 0};
    vector <int>returnArr = selectionSort(arr);
    for(int i=0;i<returnArr.size();i++){
        cout<<returnArr[i]<<" ";
    }
    return 0;
}