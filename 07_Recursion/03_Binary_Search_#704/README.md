# 704. Binary Search

**Difficulty:** Easy  
**Link:** [LeetCode 704 - Binary Search](https://leetcode.com/problems/binary-search/)

## Problem Statement

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search for `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.

### Example 1:

**Input:** `nums = [-1,0,3,5,9,12]`, `target = 9`  
**Output:** `4`  
**Explanation:** 9 exists in `nums` and its index is 4.

### Example 2:

**Input:** `nums = [-1,0,3,5,9,12]`, `target = 2`  
**Output:** `-1`  
**Explanation:** 2 does not exist in `nums`, so we return -1.

## Constraints:

- `1 <= nums.length <= 10^4`
- `-10^4 < nums[i], target < 10^4`
- All the integers in `nums` are **unique**.
- `nums` is sorted in **ascending order**.

## Approach: Recursive Binary Search

The solution uses a classic recursive binary search algorithm.

1.  **Base Case:** If the start index `st` exceeds the end index `end`, the target is not in the array, so we return `-1`.
2.  **Find Middle:** Calculate the middle index `mid` to divide the array into two halves. Using `mid = st + (end - st) / 2` helps prevent potential integer overflow.
3.  **Compare:**
    - If `arr[mid]` is the `target`, we've found it and return `mid`.
    - If `arr[mid]` is greater than the `target`, the target must be in the left half. We make a recursive call on the subarray from `st` to `mid - 1`.
    - If `arr[mid]` is less than the `target`, the target must be in the right half. We make a recursive call on the subarray from `mid + 1` to `end`.

This process efficiently narrows down the search space by half in each step, achieving an `O(log n)` time complexity.