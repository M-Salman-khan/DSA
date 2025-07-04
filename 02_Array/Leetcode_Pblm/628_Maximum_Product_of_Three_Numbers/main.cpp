#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maximumProduct(vector<int> nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());

    int option1 = nums[n - 1] * nums[n - 2] * nums[n - 3]; // Three largest numbers
    int option2 = nums[0] * nums[1] * nums[n - 1];         // Two smallest and largest

    return max(option1, option2);
}

int main() {
    vector<int> arr = {-100, -98, -1, 2, 3, 4};
    cout << maximumProduct(arr);
    return 0;
}
