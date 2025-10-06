#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr={1,61,5,1,61};
    int val = 0;
    for(int i=0; i<arr.size();i++){
        val = val^arr[i];
    }
    cout<<val;
    return 0;
}