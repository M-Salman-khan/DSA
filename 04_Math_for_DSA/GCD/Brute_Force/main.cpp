#include<iostream>
#include<string>
using namespace std;
void gcd(int a, int b){ //Time complexity = O(min(a,b))
    int finalGcd=0;
    int counter = min(a,b);
    for(int i=1;i<=counter;i++) if(a%i==0 && b%i==0) finalGcd=i;
    cout<<finalGcd<<endl;
}
int main(){
    gcd(18,9);
    return 0;
}