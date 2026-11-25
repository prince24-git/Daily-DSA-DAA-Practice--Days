# Problem 4: Linear Search

## Problem
Given an array and a target value, print the target's first zero-based index. Print `-1` if it is not present.

## Concept
Check array elements from left to right. Stop at the first match; if the scan ends, the target was not found.

## Example
```text
Input:
5
4 7 2 7 9
7
Output:
Index: 1
```

## Complexity
Time O(n) in the worst case; extra space O(1), excluding the input array.
