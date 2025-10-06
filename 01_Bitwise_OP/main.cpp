#include<iostream>
#include<string>
using namespace std;
int main(){

    // Bitwise Operator &(AND) |(OR) ^(XOR)
    // &(AND)
    
    cout<<(4 & 8)<<endl; //) The ans will be    0100 * 1000 = 00000
    cout<<(4 | 8)<<endl; //) The ans will be    0100 + 1000 = 11000
    cout<<(4 ^ 8)<<endl; //) The ans will be    0100 + 1000 = 11000

    //Bitwise left shift operator <<
    cout<<(4 << 1)<<endl;
    // Note : Helpful formula for calculation Bitwise LeftShift Operator= a * 2^10(2 ki power)
    
    // Right shift operator
    
    cout<<(10 >> 2)<<endl;
    // Note : Helpful formula for calculation Bitwise RightShift Operator = a / 2^10(2 ki power)

    return 0;
}