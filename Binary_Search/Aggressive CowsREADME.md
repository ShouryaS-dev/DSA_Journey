# Aggressive Cows

Solves the **Aggressive Cows** problem using **Binary Search on Answer**.

### Approach
- Sort the stall positions.
- Binary search for the maximum possible minimum distance.
- `IsValid()` checks whether `c` cows can be placed with at least `min_distance` between them.

### Complexity
- Sorting: `O(n log n)`
- Binary Search: `O(n log(maxDistance))`
- Overall: `O(n log n + n log(maxDistance))`

### Example
**Input:** `{1, 2, 8, 4, 9}`, `c = 3`  
**Output:** `3`
