#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    vector<int>arr={1, 1, 0, 0, 1, 0, 1};
    int sum=0,x=1;
    for(int i=arr.size()-1;i>=0;i--){
        sum+=x*arr[i];
        x*=2;
    }
    cout<<sum;
    return 0;
}