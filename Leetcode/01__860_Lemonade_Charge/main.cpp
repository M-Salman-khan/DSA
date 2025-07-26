#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0,tens=0,twenty=0;
        for(int val:bills){
            if(val==5){
                five++;
            }
            else if(val==10){
                if (five>0) {
                    five--;
                    tens++;
                }
                else return false;
            }
            else if(val==20){
                if(tens>0 and five>0) {
                    tens--;
                    five--;
                    twenty++;
                }
                else if(five>=3) {
                    five-=3;
                    twenty++;
                }
                else return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    // Example usage:
    vector<int> bills = {5,5,10,10,20};
    bool result = sol.lemonadeChange(bills);
    cout << (result ? "true" : "false") << endl;
    return 0;
};