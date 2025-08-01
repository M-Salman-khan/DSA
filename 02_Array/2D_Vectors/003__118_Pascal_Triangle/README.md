# 118. Pascal's Triangle

**Difficulty:** Easy  
**Link:** [LeetCode 118 - Pascal's Triangle](https://leetcode.com/problems/pascals-triangle/)

## 📝 Problem Statement

Given an integer `numRows`, return the first `numRows` of **Pascal's triangle**.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

!Pascal's Triangle Animation

### Example 1:

**Input:** `numRows = 5`  
**Output:** `[[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]`

### Example 2:

**Input:** `numRows = 1`  
**Output:** `[[1]]`

## ⛓️ Constraints

- `1 <= numRows <= 30`

## 💡 Approach

The solution involves building the triangle row by row based on the properties of Pascal's triangle.

1.  Initialize a 2D vector, `triangle`, with `numRows`.
2.  Iterate from `i = 0` to `numRows - 1` to generate each row.
3.  For each row `i`:
    - Resize the current row `triangle[i]` to have `i + 1` elements.
    - The first and last elements of any row in Pascal's triangle are always `1`. So, set `triangle[i][0] = 1` and `triangle[i][i] = 1`.
    - For the elements in between (from index `j = 1` to `j < i`), calculate their value using the formula: `triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j]`. This means the current element is the sum of the two elements directly above it in the previous row.
4.  After the loop finishes, return the complete `triangle`.
