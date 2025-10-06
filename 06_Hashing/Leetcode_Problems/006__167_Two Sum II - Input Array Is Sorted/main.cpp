#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> v;
        int st=0,end=n-1;
        while(st<end){
            int sum=arr[st]+arr[end];
            if(sum==target) {
                v.push_back(arr[st]);
                v.push_back(arr[end]);
                break;
            }
            else if (sum>target) end--;
            else st++;
        }
        return v;
    }
};

int main() {
    Solution sol;
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = sol.twoSum(arr, target);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}