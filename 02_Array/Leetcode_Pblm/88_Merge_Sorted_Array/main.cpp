#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& A, int m, vector<int>& B, int n) {
    int idx=m+n-1,i=m-1,j=n-1;
    while(i>=0 && j>=0){
        if(A[i]>B[j]) A[idx--]=A[i--];
        else A[idx--]=B[j--];
    }
    while(j>=0) A[idx--]=B[j--];
}
int main(){
    vector <int>A={4, 5, 6, 0, 0, 0};
    vector <int>B={1, 2, 3};
    merge(A,3,B,3);
    for(auto val:A) cout<<val<<" ";
    return 0;
}