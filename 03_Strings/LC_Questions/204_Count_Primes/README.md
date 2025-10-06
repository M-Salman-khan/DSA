## [204. Count Primes](https://leetcode.com/problems/count-primes/)
### Medium  

---

### Problem Description:
Given an integer `n`, return the number of prime numbers that are strictly less than `n`.

---

### Example 1: 
```text
Input: n = 10
Output: 4

Explanation: There are four prime numbers less than 10, they are 2, 3, 5, 7.
```

### Example 2:
```text
Input: n = 0
Output: 0
```

### Example 3:
```text
Input: n = 1
Output: 0
```

---

### Constraints:
- `0 <= n <= 5 * 10^6`

---

### Solution Approach:
The optimal approach is to use the **Sieve of Eratosthenes** algorithm:
- Create a boolean vector `isPrime` initialized to `true` for all indices from `2` to `n-1`.
- Iterate from `2` to `sqrt(n)`. For each prime number `i`, mark all multiples of `i` as `false`.
- Finally, count all values in `isPrime` that are still `true`.

This approach improves performance significantly compared to checking each number individually.

**Time Complexity:** O(n log log n)  
**Space Complexity:** O(n)