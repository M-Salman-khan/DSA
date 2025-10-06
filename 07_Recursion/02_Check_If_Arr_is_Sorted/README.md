# Check if an Array is Sorted (Recursively)

## Problem Statement

Write a recursive C++ function to determine if a given array of integers is sorted in non-decreasing (ascending) order.

## Approach

The solution uses a recursive approach that checks the array from the end.

1.  **Base Case:** An array with 0 or 1 element is considered sorted by definition. The function returns `true` if the size `n` is less than 2.

2.  **Recursive Step:** The core idea is to check if the last two elements of the current subarray are in the correct order (`arr[n-2] <= arr[n-1]`).
    - If they are, the problem is reduced to checking if the rest of the array (from the beginning up to the `n-1`th element) is sorted. We make a recursive call for a size of `n-1`.
    - If they are not in order, the entire array is unsorted, and the function returns `false` immediately.

This "hypothesis-induction" method relies on the assumption that the smaller subproblem `isSorted(arr, n-1)` will correctly report its status, which is then combined with the check for the current last element.

### Example Walkthrough

Let's trace `isSorted({1, 3, 5}, 3)`:
- `isSorted({1, 3, 5}, 3)`: Checks `arr[1] <= arr[2]` (i.e., `3 <= 5`), which is `true`. Calls `isSorted({1, 3, 5}, 2)`.
- `isSorted({1, 3, 5}, 2)`: Checks `arr[0] <= arr[1]` (i.e., `1 <= 3`), which is `true`. Calls `isSorted({1, 3, 5}, 1)`.
- `isSorted({1, 3, 5}, 1)`: Base case `n < 2` is met. Returns `true`.

The final result is `true && true && true`, so the array is sorted.

## Complexity Analysis

- **Time Complexity:** `O(n)`, where `n` is the number of elements in the array. The function makes one recursive call for each element.

- **Space Complexity:** `O(n)` due to the depth of the recursion stack. Each function call adds a new frame to the stack.

> **Note:** The original C++ implementation passes the vector by value, which is highly inefficient as it copies the entire array on each recursive call. This leads to `O(n^2)` time and space complexity. The code should be optimized to pass the vector by reference to achieve the ideal `O(n)` complexities.