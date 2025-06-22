#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[6] ={-15, 5, 15, 22, 1, 24},target,index=0;
    cout<<"Enter the targetted value : "<<endl;
    cin>>target;
    for(int i=0;i<6;i++){
        if(arr[i]==target){
            index = i;
            break;
        }
        else{
            index = -1;
        }
    }
    cout<<target<<" is present on index "<<index<<endl;
    return 0;
}