#include<iostream>
#include<vector>
#include<string>
using namespace std;
void reverseString(vector<char>& s) {
    int st=0,end=s.size()-1;
    while(st<end) swap(s[st++],s[end--]);
    // vector<char>s=str;
    // if(str==s) cout<<"Palindrome\n";
    // else cout<<"Not a Palindrome\n";
}
int main(){
    vector<char>s = {'h','e','l','l','o'};
    reverseString(s);
    for(auto val:s) cout<<val;
    return 0;
}