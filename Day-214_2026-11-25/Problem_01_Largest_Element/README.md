# Day 214 — Array Traversal: Find the Largest Element

## Concept
Traverse the array once. Keep the largest value seen so far and update it whenever a bigger value appears. The index reported by each solution is zero-based.

## Real-life example
Finding the highest marks in a list of students' scores.

## Algorithm
1. Read the array.
2. Initialize `largest` with the first element and remember its index.
3. Compare every remaining element with `largest`.
4. Print the largest value and its index.

## Example
```text
Input:
4
12 45 7 31

Output:
Largest number: 45
Index: 1
```

## Complexity
- Time: O(n), because each element is checked once.
- Extra space: O(1), excluding the input array.

Solutions: `Problem_01.py`, `Problem_01.c`, `Problem_01.cpp`.
