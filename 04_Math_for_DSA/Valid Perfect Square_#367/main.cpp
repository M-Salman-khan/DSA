#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool isPerfectSquare(int num) {
        int st=1,end=num;
        while(st<=end){
            int mid = st+(end-st)/2;
            int midSqr=mid*mid;
            if(midSqr==num) return true;
            else if(midSqr>num) end=mid-1;
            else st=mid+1;
        }
        return false;
}
int main(){
    isPerfectSquare(14)?cout<<"true":cout<<"false";
    return 0;
}