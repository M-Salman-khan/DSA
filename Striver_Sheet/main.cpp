#include<iostream>
#include<string>
using namespace std;
int main(){
    for(int i=5;i>0;i--){
        for(int j=1;j<i+1;j++) cout<<j; // 12345
        cout<<endl;                     // 1234
    }                                   // 123
    cout<<"Hello world";                // 12
    return 0;                           // 1
}
    
