# 📂 Array & Vector Problems

Welcome to the Array & Vector section of the DSA Playground! This directory is dedicated to a comprehensive collection of problems, from fundamental algorithms to complex challenges found on platforms like LeetCode. Here, you'll find well-documented C++ solutions designed to strengthen your understanding of one of the most crucial data structures in programming.

---

## 📚 Table of Contents

1.  [🎯 Fundamental Array Algorithms](#-fundamental-array-algorithms)
2.  [🔢 Sorting Algorithms](#-sorting-algorithms)
3.  [🖼️ 2D Array (Matrix) Problems](#️-2d-array-matrix-problems)
4.  [🏆 LeetCode Array Challenges](#-leetcode-array-challenges)
5.  [⚙️ C++ Vector Specifics](#️-c-vector-specifics)

---

## 🎯 Fundamental Array Algorithms

These problems cover the essential operations and patterns that form the building blocks for more complex array-based challenges.

| #   | Problem                     | Approach                                   | Code                                      |
|-----|-----------------------------|--------------------------------------------|-------------------------------------------|
| 1   | Linear Search               | Traverse each element to find the target   | [view](Linear_Search/main.cpp)            |
| 2   | Find Max & Min              | Find maximum and minimum in a single pass  | [view](Max_Min/main.cpp)                  |
| 3   | Find Second Max             | Track the two largest elements in one pass | [view](Max_Min/secMax/main.cpp)           |
| 4   | Pair Sum                    | Use the two-pointer technique on a sorted array | [view](PairSum_pblm/main.cpp)             |
| 5   | Contains Duplicates         | Check for duplicate elements in an array   | [view](Arr_containing_duplicates/main.cpp)|

---

## 🔢 Sorting Algorithms

Implementations of classic sorting algorithms, crucial for understanding time-space complexity and in-place manipulations.

| #   | Algorithm        | Core Idea                                      | Code                                      |
|-----|------------------|------------------------------------------------|-------------------------------------------|
| 1   | Bubble Sort      | Repeatedly swap adjacent elements if unordered | [view](Sorting/Bubble_Sort/main.cpp)      |
| 2   | Insertion Sort   | Build the final sorted array one item at a time| [view](Sorting/Insertion_Sort/main.cpp)   |
| 3   | Selection Sort   | Repeatedly select the minimum and move to front| [view](Sorting/Selection_Sort/main.cpp)   |

---

## 🖼️ 2D Array (Matrix) Problems

A collection of problems focused on manipulating 2D arrays, also known as matrices.

| Problem Name          | Core Concept                             | Code                                         |
|-----------------------|------------------------------------------|----------------------------------------------|
| Spiral Matrix         | Traverse the matrix in a spiral path     | [view](2D_Array/54_Spiral_Matrix/main.cpp)   |
| Rotate Image          | Transpose the matrix, then reverse rows  | [view](2D_Array/48_Rotate_Image/main.cpp)    |
| Transpose Matrix      | Swap elements across the main diagonal   | [view](2D_Array/867_Transpose_Matrix/main.cpp)|
| Find Number in Matrix | Simple linear search across all elements | [view](2D_Array/Linear_Search/Find_Num/main.cpp) |
| Max Row Sum           | Iterate rows to find the one with max sum| [view](2D_Array/Linear_Search/Max_row_sum/main.cpp) |
| Max Column Sum        | Iterate columns to find the one with max sum| [view](2D_Array/Linear_Search/Max_col_sum/main.cpp) |
| Diagonal Sum          | Sum elements where row index equals col index | [view](2D_Array/Linear_Search/Diagonal_Sum/main.cpp) |

---

## 🏆 LeetCode Array Challenges

A curated list of interview-style array problems from LeetCode, each with an optimized solution.

| LC # | Problem Name                              | Core Concept                                 | Solution                                                |
|:-----|:------------------------------------------|:---------------------------------------------|:--------------------------------------------------------|
| 11   | Container With Most Water                 | Two-pointer approach                         | [C++](Leetcode_Pblm/11_Container_With_Most_water/main.cpp) |
| 33   | Search in Rotated Sorted Array            | Modified Binary Search                       | [C++](Leetcode_Pblm/33_Search_in_RotatedArray/main.cpp)    |
| 50   | Pow(x, n)                                 | Binary Exponentiation (Fast Power)           | [C++](Leetcode_Pblm/50_POW/main.cpp)                       |
| 75   | Sort Colors (0s, 1s & 2s)                 | Dutch National Flag algorithm (3-way partition)| [C++](Leetcode_Pblm/75_Sort_an_Array_of_0s_1s_&_2s/Optimal_Approach/main.cpp) |
| 88   | Merge Sorted Array                        | Two-pointers from the end                    | [C++](Leetcode_Pblm/88_Merge_Sorted_Array/main.cpp)         |
| 121  | Best Time to Buy and Sell Stock           | One-pass with minimum price tracking         | [C++](Leetcode_Pblm/121_Buy_and_Sell_Stock/main.cpp)       |
| 169  | Majority Element                          | Boyer-Moore Voting Algorithm / Hashing       | [Docs](Leetcode_Pblm/169_Majority_Element/README.md)        |
| 238  | Product of Array Except Self              | Prefix and Suffix product arrays             | [C++](Leetcode_Pblm/238_Product_of_arr_except_itself/main.cpp) |
| 410  | Split Array Largest Sum (Book Allocation) | Binary Search on the answer space            | [C++](Leetcode_Pblm/410_BookAllocation/main.cpp)           |
| 540  | Single Element in a Sorted Array          | Binary search on even/odd index pairs        | [C++](Leetcode_Pblm/540_Single_Element_in_a_Sorted_Array/main.cpp) |
| 628  | Maximum Product of Three Numbers          | Compare products of min/max elements         | [C++](Leetcode_Pblm/628_Maximum_Product_of_Three_Numbers/main.cpp) |
| 852  | Peak Index in a Mountain Array            | Binary Search for the peak element           | [C++](Leetcode_Pblm/852_Peak_index_in_Mountain_arr/main.cpp) |
| 1480 | Running Sum of 1d Array                   | Prefix Sum                                   | [C++](Leetcode_Pblm/1480_Running_Sum_of_1d_Array/main.cpp)  |
| 1752 | Check if Array is Sorted and Rotated      | Find the number of "break points" (inversions) | [C++](Leetcode_Pblm/1752_Check_If_Array_is_sorted_and_Rotated/main.cpp) |
| -    | Count of Number After Itself              | Brute-force nested loop approach             | [C++](Leetcode_Pblm/Count_of_num_after_itself/main.cpp)     |

---

## ⚙️ C++ Vector Specifics

Examples demonstrating the usage of C++ `std::vector` and related bitwise tricks.

| #   | Topic                     | Description                                  | Code                                      |
|-----|---------------------------|----------------------------------------------|-------------------------------------------|
| 1   | Vector Methods            | Demonstrates common `std::vector` operations | view   |
| 2   | Find Single Number (LC 136)| Use the XOR bitwise operator to find the unique element | view |

---