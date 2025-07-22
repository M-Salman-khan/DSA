
# 4Sum Problem - LeetCode #18

## 🧩 Problem Statement

Given an array `nums` of `n` integers, return all **unique quadruplets** `[nums[a], nums[b], nums[c], nums[d]]` such that:

```
0 <= a, b, c, d < n
a, b, c, and d are distinct
nums[a] + nums[b] + nums[c] + nums[d] == target
```

You must return the solution set **without duplicates**. The order of the output does not matter.

---

## 🔢 Example

### Input:
```
nums = [1, 0, -1, 0, -2, 2]
target = 0
```

### Output:
```
[
  [-2, -1, 1, 2],
  [-2,  0, 0, 2],
  [-1,  0, 0, 1]
]
```

---

## 💡 Approach

- Sort the array to make duplicate skipping and two-pointer traversal easier.
- Use two nested loops for the first two elements (`i` and `j`).
- Use two pointers (`k` and `l`) to find pairs such that the sum of all four numbers is equal to the target.
- Skip duplicate values to avoid redundant quadruplets.
- Use `long long` for the sum to avoid integer overflow.

---

