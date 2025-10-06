
# 🧮 Transpose Matrix

**Difficulty:** Easy  
**Topic:** 2D Arrays, Matrix Manipulation  
**Companies:** Amazon, Google, Microsoft, Facebook, Adobe

---

## 🧾 Problem Statement

Given a 2D integer array `matrix`, return **the transpose** of `matrix`.

The **transpose** of a matrix is the matrix flipped over its **main diagonal**, switching the matrix's **row and column indices**.

---

## 📥 Input

- A 2D integer array `matrix` of size `m x n`.

## 📤 Output

- A 2D integer array of size `n x m` representing the transpose of the input matrix.

---

## 🔁 Example 1

**Input:**

```
matrix = [[1, 2, 3],
          [4, 5, 6],
          [7, 8, 9]]
```

**Output:**

```
[[1, 4, 7],
 [2, 5, 8],
 [3, 6, 9]]
```

---

## 🔁 Example 2

**Input:**

```
matrix = [[1, 2, 3],
          [4, 5, 6]]
```

**Output:**

```
[[1, 4],
 [2, 5],
 [3, 6]]
```

---

## 🔒 Constraints

- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 1000`
- `1 <= m * n <= 10^5`
- `-10^9 <= matrix[i][j] <= 10^9`

---

## ✅ Related Topics

- Matrix
- 2D Array Traversal
- Simulation

---

## 🚀 Interview Insight

This problem has been asked in technical interviews at:

- Google
- Amazon
- Microsoft
- Facebook
- Adobe
- Bloomberg

---

## 🛠️ Solution Overview

The solution involves swapping elements across the main diagonal by creating a new matrix of size `n x m` and assigning values using a nested loop.

Time Complexity: **O(m × n)**  
Space Complexity: **O(m × n)**  
