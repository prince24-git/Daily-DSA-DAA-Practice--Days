# Problem 4: Merge Two Sorted Arrays

## Problem
Given two arrays that are already sorted in ascending order, merge them into one sorted array.

## Concept
Use two pointers, one for each input. Repeatedly copy the smaller pointed-to value, then append any remaining values.

## Example
```text
Input:
3 4
1 4 7
2 3 8 9
Output:
Merged array: 1 2 3 4 7 8 9
```

## Complexity
Time O(n + m); extra space O(n + m) for the merged result.
