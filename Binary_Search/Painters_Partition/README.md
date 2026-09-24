# Painter's Partition Problem

This program solves the **Painter's Partition Problem** using **Binary Search on the Answer**.

## 📌 Problem

Given an array where each element represents the time required to paint a board, and `m` painters, the goal is to divide the boards among the painters such that:

* Each painter gets a **contiguous sequence of boards**.
* Every board is painted completely by one painter.
* The **maximum time taken by any single painter is minimized**.

### Example


Boards: 40 30 10 20
Painters: 2


One optimal partition is:


Painter 1 → 40 + 30 = 70
Painter 2 → 10 + 20 = 30


So the minimum possible maximum time is:
70


## 💡 Approach

The solution uses **Binary Search on the Answer**.

### Search Space

* `start` = largest single board time
* `end` = sum of all board times

The answer must lie between these two values.

For every `mid`, `IsValid()` checks whether all boards can be assigned to at most `m` painters while keeping each painter's total time ≤ `mid`.

### Complexity

* **Time:** `O(n log(sum of board times))`
* **Space:** `O(1)` apart from the input array

## 🧠 Concepts Used

* Binary Search
* Binary Search on Answer
* Greedy approach
* Vectors
* Functions
* Partitioning arrays

## 📂 Example Input

```cpp
vector<int> arr {40, 30, 10, 20};
int m = 2;
```

## 📤 Output

```text
70
```

## 🚀 Learning Note

This problem is a good example of how binary search can be used even when we are **not searching for an element in an array**. Instead, we search for the minimum feasible value of the answer.
