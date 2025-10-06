#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector <int> InsertionSort(vector<int>arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }

        arr[prev+1]=curr;
    }
    return arr;
}
int main(){
    vector<int>arr={4,1,5,2,3};
    vector<int>sortedArr = InsertionSort(arr);
    for(int i=0;i<sortedArr.size();i++) cout<<sortedArr[i]<<" ";
    return 0;
}