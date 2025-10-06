
# 2965. Find Missing and Repeated Values

**Difficulty**: Easy  
**Tags**: Arrays, Hashing, Matrix

## 🧩 Problem Statement

You are given a **0-indexed 2D integer matrix `grid`** of size `n x n` with values in the range `[1, n²]`.  
Each integer appears **exactly once** **except:**

- **`a`**, which appears **twice** (the repeated number), and  
- **`b`**, which is **missing** from the matrix.

Your task is to **find the repeating and missing numbers `a` and `b`**, and return them in a **0-indexed array** of size `2`:

```
ans[0] = a  // repeated number  
ans[1] = b  // missing number
```

---

## ✅ Constraints

- `2 <= n == grid.length == grid[i].length <= 50`
- `1 <= grid[i][j] <= n * n`
- For all `x` in `[1, n²]`, there exists:
  - exactly **one** `x` that is **missing** from the grid
  - exactly **one** `x` that appears **twice**

---

## 🧠 Example 1

**Input:**

```cpp
grid = [[1,3],
        [2,2]]
```

**Output:**

```
[2,4]
```

**Explanation:**  
Number `2` appears twice, and `4` is missing.

---

## 🧠 Example 2

**Input:**

```cpp
grid = [[9,1,7],
        [8,9,2],
        [3,4,6]]
```

**Output:**

```
[9,5]
```

**Explanation:**  
Number `9` appears twice, and `5` is missing.

---

## 💡 Approach

- Use a **hash set** or **frequency count** to track which number appears more than once.
- Calculate the **expected sum** of numbers from `1` to `n²`:  
  `expectedSum = (n² × (n² + 1)) / 2`
- Compute the **actual sum** of all numbers in the matrix.
- The missing number can be found using:  
  `missing = expectedSum + repeated - actualSum`

---


## 📚 Related Topics

- Arrays
- Hash Table
- Matrix Traversal
- Bit Manipulation (alternative solution)

---
