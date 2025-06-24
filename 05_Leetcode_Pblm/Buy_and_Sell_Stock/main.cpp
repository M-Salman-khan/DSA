// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

#include<iostream>
#include<string>
using namespace std;
int main(){
    int prices[6] = {7,1,5,3,6,4};
    int sellTime=INT_MIN, buyTime=INT_MAX, buyNow=0,selltimeIndex=0,buytimeIndex=0;
    int n = sizeof(prices)/sizeof(prices[0]);
    for(int i=0;i<n;i++){
        if(prices[i]<buyTime) {
            buyTime = prices[i];
            buytimeIndex = i;
        }
        // cout<<buytimeIndex<<endl;

        if(prices[i]>sellTime) {
            sellTime = prices[i];
            selltimeIndex = i;
        }
        // cout<<selltimeIndex<<endl;

        if(buytimeIndex<sellTime)   {
            if(buyTime<sellTime) buyNow=sellTime-buyTime;
        }
        else{
            buyNow=-1;
        }
    }
    cout<<buyNow;
    return 0;
}