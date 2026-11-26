# Problem 5: Remove Duplicates from a Sorted Array

## Problem
Given a sorted array, keep one copy of each value and print the unique values in order.

## Concept
Use a write index. When the current value differs from the last kept value, write it at the next free position. Only the array prefix up to the new length contains the answer.

## Example
```text
Input:
7
1 1 2 2 2 4 5
Output:
Unique values: 1 2 4 5
Count: 4
```

## Complexity
Time O(n); extra space O(1), excluding the input array.
