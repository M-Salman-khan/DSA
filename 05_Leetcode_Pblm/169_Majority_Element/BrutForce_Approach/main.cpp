#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//Brutforce approach
int Majority_El(vector <int>arr){
    int n = arr.size();
    for (int val:arr){
        int freq = 0;
        for(int el:arr) if(el==val) freq++;
        if(freq>n/2) return val;
    }
    return -1;
}
int main(){
    vector <int>arr = {1,2,2,1,1,2,2};
    cout<<Majority_El(arr);
    return 0;
}