# Problem 2: Find the Smallest Element

## Problem
Given `n` integers, print the smallest value and its zero-based index. If the minimum occurs more than once, report its first index.

## Concept
Initialize the minimum from the first element, then scan the remaining array and update the minimum when a smaller value is found.

## Example
```text
Input:
5
8 3 10 -2 4
Output:
Smallest number: -2
Index: 3
```

## Complexity
Time O(n); extra space O(1), excluding the input array.
