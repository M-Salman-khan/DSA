# 🧃 860. Lemonade Change

**Difficulty:** Easy  
🔗 [LeetCode Problem Link](https://leetcode.com/problems/lemonade-change/)

---

## 📝 Problem Description

You're running a lemonade stand where each lemonade costs **$5**. Customers line up to buy lemonade, paying with either **$5**, **$10**, or **$20** bills. You must provide correct change for each transaction, and you start with no change in hand.

Given an array `bills`, where `bills[i]` is the bill the `i-th` customer uses to pay, return `true` if you can provide correct change to every customer. Otherwise, return `false`.

---

## 📘 Examples

### Example 1

**Input:** `bills = [5, 5, 5, 10, 20]`  
**Output:** `true`  
**Explanation:**
- Collect three $5 bills.
- Accept $10 and give back one $5.
- Accept $20 and give back one $10 and one $5.
✅ All customers received the correct change.

### Example 2

**Input:** `bills = [5, 5, 10, 10, 20]`  
**Output:** `false`  
**Explanation:**
- Collect two $5 bills.
- Accept $10 and give back one $5.
- Accept another $10 and give back one $5.
- Accept $20, but cannot provide $15 change.
❌ Cannot give correct change to the last customer.

---

## 💡 Approach

This problem is solved using a **greedy** strategy by tracking the number of `$5` and `$10` bills we have:

1. Initialize counters for `$5` and `$10` bills.
2. Loop through each bill in `bills`:
   - **$5 bill:** No change needed. Increment `$5` count.
   - **$10 bill:** Requires $5 change.
     - If we have a `$5`, decrement its count and increment `$10` count.
     - Otherwise, return `false`.
   - **$20 bill:** Requires $15 change.
     - Prefer giving one `$10` and one `$5` (greedy approach).
     - If not possible, give three `$5` bills.
     - If neither is possible, return `false`.
3. If all customers are handled, return `true`.

---

## 📊 Complexity

- **Time Complexity:** `O(N)` — We iterate through the `bills` list once.
- **Space Complexity:** `O(1)` — We use only two counters regardless of input size.