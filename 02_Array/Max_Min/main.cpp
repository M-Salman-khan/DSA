#include<iostream>
#include<string>
using namespace std;
int main(){
    int arr[6] ={-15, 5, 15, 22, 1, 24};
    int smallest_num = INT_MAX, index = 0;
    for(int i = 0;i < 6;i++) {
        if(arr[i] < smallest_num){
            smallest_num = arr[i];
            index = i;
        }
    }   
    cout<<"Minimum number in array is "<<smallest_num<<" at index "<<index<<endl;


    int maximum_num = INT_MIN;
    for(int i = 0;i < 6;i++) {
        if(arr[i] > maximum_num){
            maximum_num = arr[i];
            index = i;
        }
    }   
    cout<<"Maximum number in array is "<<maximum_num<<" at index "<<index<<endl;
    return 0;
}