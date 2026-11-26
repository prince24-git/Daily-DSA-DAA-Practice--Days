# Problem 1: Second Largest Distinct Element

## Problem
Given `n` integers, find the second-largest distinct value. If there is no second distinct value, report that clearly.

## Concept
Track the largest and second-largest distinct values in one pass. Ignore values equal to the current largest.

## Example
```text
Input:
6
8 3 10 10 -2 7
Output:
Second largest distinct: 8
```

## Complexity
Time O(n); extra space O(1), excluding the input array.
