#include<iostream>
#include<string>
using namespace std;

// Program to reverse the given array
int main(){
    int arr[7] ={-15, 5, 15, 22, 1,2, 24};
    int start=0,end=6;
    cout<<"Original Array : ";
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Array : ";
    for(int i=0; i<7; i++){
        cout << arr[i] << " ";
    }
    return 0;
}