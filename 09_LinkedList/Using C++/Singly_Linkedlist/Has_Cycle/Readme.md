# 141. Linked List Cycle

## Difficulty
Easy

## Problem Statement

Given `head`, the head of a linked list, determine if the linked list has a cycle in it.

A cycle exists in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer.

Internally, `pos` is used to denote the index of the node that the tail's `next` pointer is connected to (0-indexed).  
**Note:** `pos` is not passed as a parameter.

Return:
- `true` if there is a cycle in the linked list  
- `false` otherwise

---

## Examples

### Example 1
**Input:**  
head = [3,2,0,-4], pos = 1  
**Output:**  
true  
**Explanation:**  
The tail connects to the 1st node (0-indexed), forming a cycle.

---

### Example 2
**Input:**  
head = [1,2], pos = 0  
**Output:**  
true  
**Explanation:**  
The tail connects to the 0th node, forming a cycle.

---

### Example 3
**Input:**  
head = [1], pos = -1  
**Output:**  
false  
**Explanation:**  
There is no cycle in the linked list.

---

## Constraints

- Number of nodes in the list: `0 ≤ n ≤ 10⁴`
- Node value range: `-10⁵ ≤ Node.val ≤ 10⁵`
- `pos` is either `-1` or a valid index in the linked list

---

## Follow-up

Can you solve this problem using **O(1) memory (constant space)**?

---

## Source

LeetCode Problem 141  
https://leetcode.com/problems/linked-list-cycle/
