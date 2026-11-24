# Problem 2: LCM of Two Numbers

## Concept
For positive inputs, LCM(a,b)=a*b/GCD(a,b). Find GCD first; if either input is zero, LCM is zero.

## Real-life connection
If two alarms ring every 6 and 8 minutes, they ring together again after 24 minutes.

## Example
```text
Input: 6 8
Output: 24
```

## Input
Input: two non-negative integers.

## Complexity
Time O(log(min(a,b))) to compute GCD; extra space O(1).

Solutions: `Problem_02.py`, `Problem_02.c`, `Problem_02.cpp`.
