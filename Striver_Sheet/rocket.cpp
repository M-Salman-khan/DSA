#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int m=9;
        for(int j=0;j<m;j++){
            if(j==m/2) cout<<"*";
            else cout<<" ";
        }
        m-=2;
        cout<<endl;
    }
    return 0;
}