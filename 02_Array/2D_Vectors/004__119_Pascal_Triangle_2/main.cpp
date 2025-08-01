#include<iostream>
#include<vector>
using namespace std;
vector<int> generate(int numrow) {
        int numRows=numrow+1;
        vector<vector<int>>arr(numRows);
        for(int i=0;i<numRows;i++){
            arr[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j==0 || j==i ) arr[i][j]=1;
                else arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
            }   
        }
        return arr[numrow];
    }
int main(){
    int n;
    cout<<"Enter rowIndex : ";
    cin>>n;
    vector<int>value = generate(n);
    for(auto val:value){
            cout<<val<<" ";
    }

    return 0;
}