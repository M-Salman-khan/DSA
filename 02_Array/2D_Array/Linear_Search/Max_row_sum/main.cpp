#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[2][2]={{12,45},{23,8}};
    pair<int,int>pairNum={-1,-1};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==23){
                cout<<"Find\n";
                pairNum.first=i;
                pairNum.second=j;
            }
        }
    }
    cout<<pairNum.first<<" : "<<pairNum.second;
    return 0;
}