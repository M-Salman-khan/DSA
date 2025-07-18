
# 🧮 Two Sum - LeetCode Problem #1

## 📝 Problem Statement

Given an array of integers `nums` and an integer `target`, return **indices** of the **two numbers** such that they add up to `target`.

You may assume that each input would have **exactly one solution**, and you **may not** use the same element twice.

You can return the answer in **any order**.

---

## 🔍 Example

### Example 1:
```
Input: nums = [2, 7, 11, 15], target = 9  
Output: [0, 1]
Explanation: nums[0] + nums[1] = 2 + 7 = 9
```

### Example 2:
```
Input: nums = [3, 2, 4], target = 6  
Output: [1, 2]
```

### Example 3:
```
Input: nums = [3, 3], target = 6  
Output: [0, 1]
```

---

## 🧠 Constraints

- `2 <= nums.length <= 10⁴`
- `-10⁹ <= nums[i] <= 10⁹`
- `-10⁹ <= target <= 10⁹`
- **Only one valid answer exists**

---

## ✅ Approach

- Use a hash map to store each number and its index.
- For each element, calculate the complement (i.e., `target - current number`).
- If the complement exists in the hash map, return the indices.

---

## 💻 C++ Solution

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.find(complement) != m.end()) {
                return {m[complement], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};
```
