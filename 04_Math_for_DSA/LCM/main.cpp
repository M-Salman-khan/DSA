#include<iostream>
#include<string>
using namespace std;
int gcd(int a, int b) {
        while(a>0 && b>0){
            if(a>b) a=a%b;
            else b=b%a;
        }
        if(a==0) return b;
        return a;
}
int lcm(int a,int b){
    return (a*b)/(gcd(a,b));
}
int main(){
    // lcm(a,b) = a*b/gcd(a,b); 
    cout<<lcm(20,28);
    return 0;
}