## [1480. Running Sum of 1d Array](https://leetcode.com/problems/running-sum-of-1d-array/)
### Easy  

---

### Problem Description:
Given an array `nums`. We define a running sum of an array as  
`runningSum[i] = sum(nums[0]…nums[i])`.

Return the *running sum* of `nums`.

---

### Example 1:
```text
Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
```

### Example 2:
```text
Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
```

### Example 3:
```text
Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
```

---

### Constraints:
- `1 <= nums.length <= 1000`  
- `-10^6 <= nums[i] <= 10^6`

---

### Solution Approach:
Two approaches can be used to solve the problem:

#### 1. Brute Force Approach:
- Use an extra array.
- Iterate through `nums` and maintain a cumulative `sum`.
- Store each running sum in a new result array.

#### 2. Optimized Approach:
- Modify the original array in-place.
- Starting from index `1`, set `nums[i] = nums[i-1] + nums[i]`.

This reduces space complexity to O(1) (excluding output space).

---

**Time Complexity:** O(n)  
**Space Complexity:** O(1) for optimized, O(n) for brute force

