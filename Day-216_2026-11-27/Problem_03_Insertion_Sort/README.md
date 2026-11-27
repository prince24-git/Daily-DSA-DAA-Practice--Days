# Problem 3: Insertion Sort in Ascending Order

## Problem
Sort `n` integers using Insertion Sort.

## Concept
Keep the left part sorted. Take the next value, shift larger sorted values one step right, and insert the value in its correct position.

## Example
```text
Input:
5
9 5 1 4 3
Output:
Sorted array: 1 3 4 5 9
```

## Complexity
Worst/average time O(n^2); best time O(n) for an already sorted array; extra space O(1).
