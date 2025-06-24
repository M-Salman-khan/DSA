#include<iostream>
#include<string>
#include<climits>
using namespace std;
int main(){
    int arr[9] = {-2,1,-3,4,-1,2,1,-5,4};
    int maxsum = INT_MIN, sum=0;
    for(int val:arr){
        sum+=val;
        maxsum = max(maxsum,sum);
        if(sum<0) sum=0;
    }
    cout<<" maximum sum of sub array "<<maxsum<<endl;
    return 0;
}