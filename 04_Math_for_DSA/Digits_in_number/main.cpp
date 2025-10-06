#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
void getNum(int num){
    int sum=0;
    cout<<"Reverse of a given number is ";
    while(num!=0){ //print the num in reverse manner
        int digit = num%10;
        cout<<digit;
        sum+=digit;
        num=num/10;
    }
    cout<<"\nSum of the digits is "<<sum<<endl;
    
}

void isArmstrong(int num){
    int sum=0;
    int checkNum = num;
    while(num!=0){ //print the num in reverse manner
        int digit = num%10;
        // cout<<digit;
        sum+=(digit*digit*digit);
        num=num/10;
    }
    if(sum==checkNum) cout<<checkNum<<" is an Armstrong"<<endl;
    else cout<<checkNum<<" is not an armstrong"<<endl;
}


int main(){
    int num=153;
    cout<<"Original number : "<<num<<endl;
    getNum(num);
    isArmstrong(num);
    cout<<"Count of the digits in a number is "<<(int)(log10(num)+1)<<endl; //Count the digits in a number   
    return 0;
}





