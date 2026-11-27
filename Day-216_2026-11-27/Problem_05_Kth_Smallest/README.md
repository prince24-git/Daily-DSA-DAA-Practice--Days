# Problem 5: Find the Kth Smallest Element

## Problem
Given `n` integers and a valid 1-based position `k`, find the kth smallest value. Duplicate values occupy separate positions after sorting.

## Concept
Sort the array with Insertion Sort, then read the value at zero-based index `k - 1`.

## Example
```text
Input:
5
7 2 9 4 1
3
Output:
Kth smallest: 4
```

## Complexity
Time O(n^2) using Insertion Sort; extra space O(1), excluding the input array.
