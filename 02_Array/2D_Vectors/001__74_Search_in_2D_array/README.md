## [74. Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
### Medium  

---

### Problem Description:
Write an efficient algorithm that searches for a value in an `m x n` matrix. This matrix has the following properties:
- Integers in each row are sorted from left to right.
- The first integer of each row is greater than the last integer of the previous row.

Return `true` if the target is found in the matrix, and `false` otherwise.

---

### Example 1:
```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]], target = 5
Output: true
```

### Example 2:
```text
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]], target = 10
Output: false
```

---

### Constraints:
- `m == matrix.length`
- `n == matrix[i].length`
- `1 <= m, n <= 100`
- `-10^4 <= matrix[i][j], target <= 10^4`

---

### Solution Approach:
The matrix is row-wise sorted, so we can apply binary search twice:
1. First binary search to identify the correct row where the target could lie.
2. Second binary search within that row to find the target.


---

**Time Complexity:** O(log m + log n)  
**Space Complexity:** O(1)
