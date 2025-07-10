
# 🔢 Reverse, Sum of Digits & Armstrong Number Checker

This is a simple C++ program that performs the following operations on a given number:

1. Prints the original number.
2. Displays the number in reverse.
3. Calculates and prints the sum of its digits.
4. Checks whether the number is an **Armstrong number**.
5. Counts the total number of digits in the number.

---


## ✅ What is an Armstrong Number?

An **Armstrong number** (also known as a narcissistic number) is a number that is equal to the **sum of the cubes of its digits**.

> 📌 Example:  
> 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = **153** ✔️

---

## 🧠 Program Logic

### `getNum(int num)`
- Prints the reverse of the number.
- Calculates the sum of its digits.

### `isArmstrong(int num)`
- Computes the sum of cubes of digits.
- Compares with the original number to determine if it's an Armstrong number.

### `main()`
- Declares the number (`153` in this case).
- Calls both helper functions.
- Uses `log10` to calculate the number of digits.

---

## 💻 Sample Output

```
Original number : 153
Reverse of a given number is 351
Sum of the digits is 9
153 is an Armstrong
Count of the digits in a number is 3
```

---



## 📚 Concepts Used

- Loops (`while`)
- Modulo & division
- Mathematical functions (`log10`)
- Armstrong logic
- I/O operations in C++

---

## 🏁 Enhancements You Can Try

- Accept input from the user.
- Extend to check Armstrong for `n`-digit numbers.
- Check a range (e.g., all 3-digit Armstrong numbers).
- Use functions like `pow()` instead of `digit * digit * digit`.
