# 🔍 LeetCode 240 - Search a 2D Matrix II
Medium
## 📝 Problem Statement

Write an efficient algorithm that searches for a target value in an `m x n` integer matrix. This matrix has the following properties:

- Integers in each row are sorted in **ascending** from left to right.
- Integers in each column are sorted in **ascending** from top to bottom.

## 💡 Example

### Input:
```
matrix = [
  [1, 4, 7, 11, 15],
  [2, 5, 8, 12, 19],
  [3, 6, 9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
target = 19
```

### Output:
```
true
```

## ✅ Constraints
- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 300`
- `-10^9 <= matrix[i][j] <= 10^9`
- All integers in each row and column are sorted in ascending order.
- `-10^9 <= target <= 10^9`

## 🚀 Approach

Start from the top-right corner of the matrix and perform a search:
- If the current element is equal to the target, return true.
- If the current element is greater than the target, move left.
- If the current element is less than the target, move down.

Time Complexity: `O(m + n)`  
Space Complexity: `O(1)`

---
