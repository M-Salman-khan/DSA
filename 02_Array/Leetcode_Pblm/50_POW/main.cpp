#include<iostream>
#include<string>
using namespace std;
int main(){
    long Binform = n;
    if(n<0){
        x=1/x;
        Binform = -Binform;
    }
    double ans =1;
    while(Binform>0){
        if(Binform%2==1){
            ans*=x;
        }
        x*=x;
        Binform/=2;
    }
    return ans;
}