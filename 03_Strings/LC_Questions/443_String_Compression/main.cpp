#include<iostream>
#include<string>
#include<vector>
using namespace std;
int compress(vector<char>& chars) {
    int idx=0;
    int n=chars.size();
    for(int i=0;i<n;i++){
        int count=0;
        char ch=chars[i];
        while(i<n && chars[i]==ch){
            count++,i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }
        else{
            chars[idx++]=ch;
            string str = to_string(count);
            for(char dig:str){
                chars[idx++]=dig;
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
    }
int main(){
    vector <char>chars = {'a','a','b','b','c','c','c'};
    cout<<"Size of compress array is "<<compress(chars)<<endl;
    for(auto dig:chars) {cout<<dig<<" ";}
    return 0;
}