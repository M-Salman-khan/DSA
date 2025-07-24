# 73. Set Matrix Zeroes

**Difficulty:** Medium  
**Link:** [LeetCode 73 - Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)

## Problem Statement

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it **in-place**.

### Example 1:

**Input:**
```
matrix = [
 [1, 1, 1],
 [1, 0, 1],
 [1, 1, 1]
]
```

**Output:**
```
[
 [1, 0, 1],
 [0, 0, 0],
 [1, 0, 1]
]
```

### Example 2:

**Input:**
```
matrix = [
 [0, 1, 2, 0],
 [3, 4, 5, 2],
 [1, 3, 1, 5]
]
```

**Output:**
```
[
 [0, 0, 0, 0],
 [0, 4, 5, 0],
 [0, 3, 1, 0]
]
```

## Constraints:

- `m == matrix.length`
- `n == matrix[0].length`
- `1 <= m, n <= 200`
- `-2^31 <= matrix[i][j] <= 2^31 - 1`

## Approach (O(m + n) Space)

The solution implemented uses two auxiliary arrays to keep track of the rows and columns that need to be zeroed out. This avoids the issue of zeroing out a row/column and then using those new zeroes to trigger more zeroing in subsequent steps.

1.  **Initialization**: Create two boolean or integer arrays, `row` (of size `m`) and `col` (of size `n`), initialized to `0` or `false`.
2.  **First Pass (Marking)**: Iterate through the entire `matrix`. If you find an element `matrix[i][j]` that is `0`, mark the corresponding row and column in your auxiliary arrays (e.g., `row[i] = 1` and `col[j] = 1`).
3.  **Second Pass (Setting Zeroes)**: Iterate through the `matrix` again. For each element `matrix[i][j]`, check if its corresponding row or column was marked in the auxiliary arrays (`row[i] == 1` or `col[j] == 1`). If so, update the element `matrix[i][j]` to `0`.

This approach correctly sets the matrix zeroes in `O(m * n)` time complexity and `O(m + n)` space complexity.

## Follow-up: O(1) Space Solution

A more space-efficient solution can be achieved by using the first row and first column of the matrix itself as the marker arrays.

1.  First, check if the original first row and first column contain any zeroes and store this information in two boolean variables.
2.  Then, iterate through the rest of the matrix (from `[1,1]`). If `matrix[i][j] == 0`, set `matrix[i][0] = 0` and `matrix[0][j] = 0`.
3.  Next, iterate through the rest of the matrix again. If `matrix[i][0] == 0` or `matrix[0][j] == 0`, set `matrix[i][j] = 0`.
4.  Finally, use the boolean variables from step 1 to determine if the first row and/or first column need to be zeroed out.