## [9. Palindrome Number](https://leetcode.com/problems/palindrome-number/)
### Easy

---

### Problem Description:
Given an integer `x`, return `true` if `x` is a **palindrome**, and `false` otherwise.

An integer is a palindrome when it reads the same backward as forward.

---

### Example 1:
```text
Input: x = 121
Output: true
```

### Example 2:
```text
Input: x = -121
Output: false

Explanation: From left to right, it reads -121. From right to left, it becomes 121-.
```

### Example 3:
```text
Input: x = 10
Output: false

Explanation: Reads 01 from right to left. Therefore, it is not a palindrome.
```

---

### Constraints:
- `-2^31 <= x <= 2^31 - 1`

---

### Solution Approach:
To determine whether a number is a palindrome:
- Negative numbers are never palindromes due to the negative sign.
- Numbers ending in 0 (except for 0 itself) are not palindromes.
- A full integer reverse can be done carefully with overflow checks.

Steps:
- Store the original number.
- Reverse the number digit by digit.
- Compare the reversed number with the original.

**Note:** If overflow is detected during reversal, return false.

**Time Complexity:** O(log₁₀(x))  
**Space Complexity:** O(1)

