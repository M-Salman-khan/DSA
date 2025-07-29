# 367. Valid Perfect Square

**Difficulty:** Easy  
**Link:** [LeetCode 367 - Valid Perfect Square](https://leetcode.com/problems/valid-perfect-square/)

## Problem Statement

Given a positive integer `num`, return `true` if `num` is a perfect square, and `false` otherwise.

A **perfect square** is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

**Follow-up:** Do **not** use any built-in library function, such as `sqrt`.

### Example 1:

**Input:** `num = 16`  
**Output:** `true`  
**Explanation:** `4 * 4 = 16`.

### Example 2:

**Input:** `num = 14`  
**Output:** `false`  
**Explanation:** There is no integer `x` such that `x * x = 14`.

## Constraints:

- `1 <= num <= 2^31 - 1`

## Approach: Binary Search

Since we are looking for an integer `x` such that `x * x = num`, we can search for this `x` in the range `[1, num]`. The squares of numbers are monotonically increasing, which makes this problem a perfect candidate for binary search.

1.  Initialize `low = 1` and `high = num`.
2.  While `low <= high`:
    -   Calculate `mid = low + (high - low) / 2`. Use `long long` for `mid` to prevent overflow when calculating `mid * mid`.
    -   If `mid * mid == num`, we've found the integer square root, so `num` is a perfect square. Return `true`.
    -   If `mid * mid < num`, the potential square root must be larger, so we search in the right half: `low = mid + 1`.
    -   If `mid * mid > num`, the potential square root must be smaller, so we search in the left half: `high = mid - 1`.
3.  If the loop finishes without finding a perfect square, return `false`.

This approach has a time complexity of O(log n) and uses constant space.