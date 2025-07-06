#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int>arr={1,3,9,7,4,8};
    int max=INT_MIN,secMax=INT_MIN;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }
        else if(arr[i]>secMax && secMax!=arr[i]) secMax=arr[i];
    }
    cout<<"Second max is "<<secMax<<endl;
    return 0;
}