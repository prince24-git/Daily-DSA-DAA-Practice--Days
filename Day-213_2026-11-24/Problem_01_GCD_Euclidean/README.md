# Problem 1: GCD using Euclidean Algorithm

## Concept
The GCD is the largest number that divides both inputs. Use gcd(a,b)=gcd(b,a%b) until b becomes zero.

## Real-life connection
For 48 cm and 18 cm, the largest equal tile side is 6 cm.

## Example
```text
Input: 48 18
Output: 6
```

## Input
Input: two non-negative integers.

## Complexity
Time O(log(min(a,b))) using Euclid's algorithm; extra space O(1).

Solutions: `Problem_01.py`, `Problem_01.c`, `Problem_01.cpp`.
