# 🔢 509. Fibonacci Number

**Difficulty:** Easy  
**Link:** [LeetCode 509 - Fibonacci Number](https://leetcode.com/problems/fibonacci-number/)

## 📝 Problem Statement

The **Fibonacci numbers**, commonly denoted `F(n)`, form a sequence, called the **Fibonacci sequence**, such that each number is the sum of the two preceding ones, starting from `0` and `1`. That is,

- `F(0) = 0`, `F(1) = 1`
- `F(n) = F(n - 1) + F(n - 2)`, for `n > 1`.

Given `n`, calculate `F(n)`.

### Example 1:

**Input:** `n = 2`  
**Output:** `1`  
**Explanation:** `F(2) = F(1) + F(0) = 1 + 0 = 1`.

### Example 2:

**Input:** `n = 3`  
**Output:** `2`  
**Explanation:** `F(3) = F(2) + F(1) = 1 + 1 = 2`.

### Example 3:

**Input:** `n = 4`  
**Output:** `3`  
**Explanation:** `F(4) = F(3) + F(2) = 2 + 1 = 3`.

## ⛓️ Constraints:

- `0 <= n <= 30`

## 🤔 Approach: Naive Recursion

The solution directly translates the mathematical definition of the Fibonacci sequence into a recursive function.

1.  **Base Case:** If `n` is less than 2 (`0` or `1`), the function returns `n` itself. This stops the recursion.
2.  **Recursive Step:** For any `n > 1`, the function calls itself to compute `fib(n-1)` and `fib(n-2)` and returns their sum.

### ⚠️ Performance Warning

This naive recursive approach is simple to write but **highly inefficient**. It has an exponential time complexity of **O(2ⁿ)** because it re-calculates the same Fibonacci numbers multiple times. For example, to compute `fib(5)`, `fib(3)` is calculated twice, `fib(2)` is calculated three times, and so on.

For production code or larger constraints, this solution would be too slow. The standard optimized solutions use **Memoization (Top-Down DP)** or **Tabulation (Bottom-Up DP)** to achieve a linear time complexity of **O(n)**.