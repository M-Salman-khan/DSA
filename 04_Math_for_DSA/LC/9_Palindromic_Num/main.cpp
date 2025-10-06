#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(int x) {
        int reverseNum=0;
        int compareNum=x;
        while(x!=0){
            int digit = x%10;
            if(reverseNum>INT_MAX/10 || reverseNum<INT_MIN/10) return false;
            reverseNum = (reverseNum*10)+digit;
            x/=10;
        }
        if(compareNum==reverseNum) return true;
        return false;
}
int main(){
    if(isPalindrome(2147483649)) cout<<"Palindrome\n";
    else cout<<"Not a palindrome\n";
    return 0;
}