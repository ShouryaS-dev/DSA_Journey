# Book Allocation Problem

A C++ implementation of the **Book Allocation Problem** using **Binary Search on Answer**.

## Problem

Given an array where each element represents the number of pages in a book, allocate all books to a given number of students such that:

- Each student gets at least one book.
- Books are allocated in contiguous order.
- A book cannot be divided between students.
- The maximum number of pages assigned to any student should be minimized.

### Example

Books = {2, 1, 3, 4}
Total number fo students = 2
Student 1 → 2 + 1 + 3 = 6 pages
Student 2 → 4 pages
Therefore, the minimum possible maximum number of pages is: 6
