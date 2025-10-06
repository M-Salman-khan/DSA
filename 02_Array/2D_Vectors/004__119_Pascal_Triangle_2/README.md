# LeetCode 119: Pascal's Triangle II

## 🧩 Problem Statement

Given an integer `rowIndex`, return the `rowIndex`-th (0-indexed) row of **Pascal's triangle**.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

!Pascal's Triangle

---

## 🔢 Examples

### Example 1:

**Input:** `rowIndex = 3`  
**Output:** `[1, 3, 3, 1]`

### Example 2:

**Input:** `rowIndex = 0`  
**Output:** `[1]`

### Example 3:

**Input:** `rowIndex = 1`  
**Output:** `[1, 1]`

---

## 💡 Approach: Full Triangle Generation

This solution generates the entire Pascal's Triangle up to the required `rowIndex` and then returns the specific row.

1.  **Initialize a 2D Vector:** A 2D vector `arr` is created to hold all the rows of the triangle. It is sized to `rowIndex + 1`.
2.  **Iterate Through Rows:** The code loops from `i = 0` to `rowIndex`. In each iteration, it constructs the `i`-th row.
3.  **Build Each Row:**
    -   Each row `i` is resized to have `i + 1` elements.
    -   The first and last elements of any row (`j == 0` or `j == i`) are always set to `1`.
    -   Any other element at `arr[i][j]` is calculated by summing the two elements from the row above: `arr[i-1][j-1] + arr[i-1][j]`.
4.  **Return the Result:** After the loops complete, the full triangle up to `rowIndex` has been generated. The function simply returns the final row, `arr[rowIndex]`.

### Complexity Analysis

*   **Time Complexity:** `O(k^2)`, where `k` is the `rowIndex`. This is because we are iterating through each cell of the triangle to compute its value. The total number of cells is approximately `k^2 / 2`.
*   **Space Complexity:** `O(k^2)`. The 2D vector stores all `k+1` rows of the triangle, leading to quadratic space usage.

> **Note:** The LeetCode problem has a follow-up asking to optimize the solution to use only `O(k)` extra space. This implementation does not meet that constraint but correctly solves the problem by building the full structure.

