# 48. Rotate Image

📂 **Difficulty:** Medium  
📌 **Category:** Array, Matrix  
💼 **Asked In:** Amazon, Microsoft, Google, Adobe, Facebook  
📅 **Frequently Asked In:** 2020, 2021, 2022, 2023 Interviews

---

## 📄 Problem Statement

You are given an `n x n` 2D matrix representing an image, rotate the image **90 degrees (clockwise)**.

You have to **rotate the image in-place**, which means **you have to modify the input 2D matrix directly**.  
**DO NOT** allocate another 2D matrix and do the rotation.

---

### 🔁 Example

**Input:**
```cpp
matrix = [
  [1,2,3],
  [4,5,6],
  [7,8,9]
]
```

**Output:**
```cpp
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
```

---

### 🧠 Approach

1. **Transpose the matrix** – swap matrix[i][j] with matrix[j][i].
2. **Reverse each row** – reverse every row of the transposed matrix.

This will result in a 90° clockwise rotation **in-place**.

---

### 📊 Time and Space Complexity

- **Time Complexity:** `O(n^2)`  
- **Space Complexity:** `O(1)` (in-place modification)

---

### ✅ Constraints

- `matrix.length == n`  
- `matrix[i].length == n`  
- `1 <= n <= 20`  
- `-1000 <= matrix[i][j] <= 1000`

---

## 🔗 Related Topics

- Arrays  
- Matrix Manipulation  
- In-place Algorithms

---

## 📌 Tags

`#Matrix` `#Rotation` `#InPlace` `#LeetCode48`