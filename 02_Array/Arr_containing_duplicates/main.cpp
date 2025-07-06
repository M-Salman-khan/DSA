#include<iostream>
#include<vector>
using namespace std;
bool isDuplicate(vector<int>arr){
    int n=arr.size();
    bool flag=false;
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){ 
                flag=true;
                break;
            };
        }
    }
    return flag;

}
int main(){
    vector <int>arr={1,2,5,6,9};
    if(isDuplicate(arr)) cout<<"Present"<<endl;
    else cout<<"No duplicacy found"<<endl;
    return 0;
}