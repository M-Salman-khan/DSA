
# LeetCode 15: 3Sum

## 🧩 Problem Statement

Given an integer array `nums`, return **all the triplets** `[nums[i], nums[j], nums[k]]` such that:

- `i != j`,  
- `i != k`,  
- `j != k`, and  
- `nums[i] + nums[j] + nums[k] == 0`.

**Notice** that the solution set must **not contain duplicate** triplets.

---

## 🔒 Constraints

- `3 <= nums.length <= 3000`
- `-10⁵ <= nums[i] <= 10⁵`

---

## ✅ Example

### Input:
```cpp
nums = [-1, 0, 1, 2, -1, -4]
```

### Output:
```cpp
[[-1, -1, 2], [-1, 0, 1]]
```

### Explanation:
- `-1 + -1 + 2 = 0`
- `-1 + 0 + 1 = 0`
- The triplet `[-1, 2, -1]` is considered the same as `[-1, -1, 2]` after sorting, so it’s not added again.

---

## 💡 Approach

- **Sort** the array first.
- Fix one element and use the **two-pointer** technique to find the other two numbers.
- Skip duplicates to avoid repeating the same triplet.
