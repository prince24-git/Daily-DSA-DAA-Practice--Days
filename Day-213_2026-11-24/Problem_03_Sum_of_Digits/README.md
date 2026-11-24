# Problem 3: Sum of Digits

## Concept
Take the last digit with n%10, add it to total, then remove it with integer division n/10. Repeat until n is zero.

## Real-life connection
Add digits on a parcel code to make a quick checksum: 5081 gives 5+0+8+1=14.

## Example
```text
Input: 5081
Output: 14
```

## Input
Input: a non-negative integer.

## Complexity
Time O(d), where d is the number of digits; extra space O(1).

Solutions: `Problem_03.py`, `Problem_03.c`, `Problem_03.cpp`.
