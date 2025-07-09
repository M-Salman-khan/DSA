## Sieve of Eratosthenes

The **Sieve of Eratosthenes** is an efficient algorithm to find all prime numbers less than a given number `n`. It is based on the idea that all non-prime numbers are divisible by a smaller prime number.

---

### 🧠 How It Works:

1. **Initialization:**
   - Create a boolean array `isPrime[]` of size `n` and initialize all entries as `true`.
   - Set `isPrime[0]` and `isPrime[1]` to `false`, since 0 and 1 are not prime numbers.

2. **Marking Non-Primes:**
   - Iterate `i` from `2` to `sqrt(n)`.
   - If `isPrime[i]` is `true`, mark all multiples of `i` (starting from `i*i`) as `false` in the array.

3. **Counting Primes:**
   - After the loop, count all the indices `i` for which `isPrime[i]` is `true`. These represent prime numbers less than `n`.

---

### 📌 Key Points:
- Multiples of a prime `p` are marked starting from `p*p` because all smaller multiples will have already been marked by smaller primes.
- This avoids redundant operations and makes the algorithm very efficient.

---

### ⏱️ Time Complexity:
- **O(n log log n)**

### 💾 Space Complexity:
- **O(n)**

---

### 🔗 Reference Code (C++):
You can find the full implementation here:  
[👉 View Code on GitHub](https://github.com/your-username/LC_Questions/blob/main/204_Count_Primes/main.cpp)