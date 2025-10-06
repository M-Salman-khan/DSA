# LeetCode 167: Two Sum II - Input Array Is Sorted

## 🧩 Problem Statement

Given a **1-indexed** array of integers `numbers` that is already **sorted in non-decreasing order**, find two numbers such that they add up to a specific `target` number. Let these two numbers be `numbers[index1]` and `numbers[index2]` where `1 <= index1 < index2 <= numbers.length`.

Return the indices of the two numbers, `index1` and `index2`, **added by one** as an integer array `[index1, index2]` of length 2.

The tests are generated such that there is **exactly one solution**. You **may not** use the same element twice.

Your solution must use only constant extra space.

---

## 🔢 Examples

### Example 1:

**Input:** `numbers = [2, 7, 11, 15]`, `target = 9`  
**Output:** `[1, 2]`  
**Explanation:** The sum of 2 and 7 is 9. Therefore, `index1 = 1`, `index2 = 2`. We return `[1, 2]`.

### Example 2:

**Input:** `numbers = [2, 3, 4]`, `target = 6`  
**Output:** `[1, 3]`  
**Explanation:** The sum of 2 and 4 is 6. Therefore `index1 = 1`, `index2 = 3`. We return `[1, 3]`.

### Example 3:

**Input:** `numbers = [-1, 0]`, `target = -1`  
**Output:** `[1, 2]`  
**Explanation:** The sum of -1 and 0 is -1. Therefore `index1 = 1`, `index2 = 2`. We return `[1, 2]`.

---

## 💡 Approach: Two-Pointer Technique

Since the input array is sorted, we can use the efficient **two-pointer** approach to find the solution in O(n) time complexity and O(1) space complexity.

1.  **Initialize Pointers:** Place one pointer (`st`) at the beginning of the array and another pointer (`end`) at the end.
2.  **Iterate and Sum:**
    -   Calculate the sum of the values at the `st` and `end` pointers.
    -   If `sum == target`, we have found our pair. Return their 1-based indices (`st + 1`, `end + 1`).
    -   If `sum < target`, the sum is too small. To increase it, we need a larger number, so we move the `st` pointer one position to the right (`st++`).
    -   If `sum > target`, the sum is too large. To decrease it, we need a smaller number, so we move the `end` pointer one position to the left (`end--`).
3.  **Termination:** The loop continues until the pointers cross (`st >= end`). Since the problem guarantees exactly one solution, the loop will always find the pair and return before the pointers cross.

This method works because the sorted nature of the array allows us to make a definitive choice about which pointer to move at each step, systematically narrowing down the search space.
