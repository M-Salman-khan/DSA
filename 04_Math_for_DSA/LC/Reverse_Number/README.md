## [7. Reverse Integer](https://leetcode.com/problems/reverse-integer/)
### Medium  

---

### Problem Description:
Given a signed 32-bit integer `x`, return `x` with its digits reversed. If reversing `x` causes the value to go outside the signed 32-bit integer range [-2³¹, 2³¹ - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

---

### Example 1: 
```text
Input: x = 123
Output: 321
```

### Example 2:
```text
Input: x = -123
Output: -321
```

### Example 3:
```text
Input: x = 120
Output: 21
```

### Example 4:
```text
Input: x = 0
Output: 0
```

---

### Constraints:
- `-2^31 <= x <= 2^31 - 1`

---

### Solution Approach:
To safely reverse the integer without causing overflow, we use mathematical operations and perform an overflow check before each update.

Steps:
- Initialize a variable `reverseNum` to store the reversed number.
- Extract digits one by one using `% 10` and build the reversed number using `reverseNum * 10 + digit`.
- Before updating, check if `reverseNum` will overflow on the next operation.
- Return `0` in case of overflow.

This solution handles edge cases and is efficient.

**Time Complexity:** O(log₁₀(x))  
**Space Complexity:** O(1)

---

### ✅ C++ Implementation:
```cpp
class Solution {
public:
    int reverse(int x) {
        int reverseNum = 0;
        while (x != 0) {
            int digit = x % 10;

            if (reverseNum > INT_MAX / 10 || (reverseNum < INT_MIN / 10)) return 0;


            reverseNum = (reverseNum * 10) + digit;
            x /= 10;
        }
        return reverseNum;
    }
};
```
