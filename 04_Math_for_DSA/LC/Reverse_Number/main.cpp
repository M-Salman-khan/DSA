#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
int getNum(int num){
    int reverseNum=0;
    while(num!=0){ //print the num in reverse manner
        int digit = num%10;
        if (reverseNum > INT_MAX / 10 || (reverseNum < INT_MIN / 10)) return 0;
        reverseNum=(reverseNum*10)+digit;
        num/=10;
    }
    return reverseNum;
}


int main(){
    int num=1463847412;
    int reverseNum = getNum(num);
    cout<<"Reverse of a number is "<<reverseNum<<endl;
    return 0;
}





