#include<iostream>
#include<string>
using namespace std;
int main(){
    int maxSum=INT_MIN;
    int arr[3][2]={{1,2},{3,4},{5,6}};
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
        maxSum=max(maxSum,sum);
    }
    // cout<<maxSum;
    return 0;
}
