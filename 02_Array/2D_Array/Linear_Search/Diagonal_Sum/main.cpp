#include<iostream>
#include<string>
using namespace std;
int main(){
    // cout<<"Hello world";
    int arr[3][3] = {
        {1,2,0},
        {3,4,5},
        {5,6,9}
    };
    int n=3,sum=0;
    for(int i=0;i<3;i++){
        sum+=arr[i][i];
        if(i!=n-1-i) sum+=arr[i][n-1-i];
    }
    cout<<sum;
    return 0;
}