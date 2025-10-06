#include<iostream>
#include<string>
using namespace std;
bool isAlphaNumeric(char a){
    if(a>=97 && a<=122 || a>=48 && a<=57 || a>=65 && a<=90) return true;
    return false;
}

bool isPalindrome(string s1){
    int n=s1.length();
    int st=0,end=n-1;
    while(st<end){
        if (!isAlphaNumeric(s1[st])) {
            st++;
            continue;
        }
        if (!isAlphaNumeric(s1[end])) {
            end--;
            continue;
        }
        if(tolower(s1[st])!=tolower(s1[end])) return false;
        st++;
        end--;
    }
    return true;
}

int main(){
    string s1="race$car*";
    if(isPalindrome(s1)) cout<<"true";
    else cout<<"false";
    return 0;
}