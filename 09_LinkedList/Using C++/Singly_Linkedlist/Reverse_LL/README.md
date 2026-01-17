# Leetcode - 206. Reverse Linked List

A simple explanation of the problem without providing the solution code.

---

## 📌 Problem Statement

You are given the **head of a singly linked list**. Your task is to **reverse the linked list** and return the new head of the reversed list.

A singly linked list is a data structure where each node contains:

* A value (`data`)
* A pointer/reference to the next node in the list

Reversing the list means changing the direction of these links so that the last node becomes the first, the second-last becomes the second, and so on.

---

## 🧩 What does “reverse the linked list” mean?

If the original order is:

`1 → 2 → 3 → 4 → 5 → NULL`

After reversing, it should become:

`5 → 4 → 3 → 2 → 1 → NULL`

So instead of each node pointing forward, it points to the previous node.

---

## 📥 Input and 📤 Output

You are given:

* The **head node** of the linked list (starting point)

You must return:

* The **new head node** after the list has been reversed

---

## 📚 Examples

**Example 1**
Input: `[1, 2, 3, 4, 5]`
Output: `[5, 4, 3, 2, 1]`

**Example 2**
Input: `[1, 2]`
Output: `[2, 1]`

**Example 3**
Input: `[]` (empty list)
Output: `[]`

---

## 📏 Constraints

* Number of nodes can be between `0` and `5000`
* Each node value lies between `-5000` and `5000`

This means your solution should work efficiently even for thousands of nodes.

---

## 🤔 What the interviewer expects

This question checks:

* Your understanding of **linked lists**
* How well you handle **pointers/references**
* Your ability to think about **memory and structure manipulation**

The follow-up usually asks whether you can reverse the list:

* Iteratively (using loops)
* Recursively (using function calls)

---

## 🎯 Key Takeaway

You are not just changing values — you are changing the **connections between nodes**. Understanding this problem helps you build strong fundamentals in data structures.

---

## ✍️ Author

**Salman Khan**
B.Tech CSE Student | Web Developer | Learning Data Structures
