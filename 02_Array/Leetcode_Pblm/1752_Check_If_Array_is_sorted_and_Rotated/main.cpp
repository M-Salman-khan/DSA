#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int>& nums) {
    int count = 0;
    int n = nums.size();

    // Check order breaks for elements from index 0 to n-2
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            count++;
        }
    }

    // Check the last element with the first element
    if (nums[n - 1] > nums[0]) {
        count++;
    }

    // If the order breaks more than once, it's not sorted and rotated
    return count <= 1;
}

int main() {
    vector<int> arr = {3, 4, 5, 1, 2};
    if (check(arr)) cout << "true" << endl;
    else cout << "false" << endl;

    return 0;
}
