
## [151. Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)
### Medium  

---

### Problem Description:
Given an input string `s`, reverse the order of the words.

A **word** is defined as a sequence of non-space characters. The words in `s` will be separated by **at least one space**.

Return a string of the words in reverse order, concatenated by a **single space**.

> Note:  
> - `s` may contain **leading or trailing spaces** or **multiple spaces** between two words.  
> - The returned string should **only have a single space** separating the words.  
> - Do **not** include any extra spaces.

---

### Example 1:
```text
Input: s = "the sky is blue"
Output: "blue is sky the"
```

### Example 2:
```text
Input: s = "  hello world  "
Output: "world hello"

Explanation: Your reversed string should not contain leading or trailing spaces.
```

### Example 3:
```text
Input: s = "a good   example"
Output: "example good a"

Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
```

---

### Constraints:
- `1 <= s.length <= 10^4`
- `s` contains English letters (upper-case and lower-case), digits, and spaces `' '`.
- There is **at least one word** in `s`.

---

### Follow-up:
If the string data type is mutable in your language, can you solve it **in-place** with **O(1) extra space?**

---

### Solution Approach:
The provided C++ solution:
- Reverses the entire string.
- Extracts words one by one, reverses each word, and appends it to the result.
- Handles multiple spaces and trims leading/trailing spaces correctly.
