# Day 212 - 23 November 2026: Binary Search

## Concept
Binary Search finds a target in a sorted list. Each comparison removes half of the remaining search range. It returns the first matching middle position found, using a zero-based index, or -1 when the target is absent. The list must be sorted in ascending order.

## Real-world example
Finding a word in a dictionary: compare with a middle page, then continue in only the left or right half.

## Dry run
Input list: [1, 3, 5, 7, 9], target: 7
- low=0, high=4, mid=2: values[2]=5, search right half.
- low=3, high=4, mid=3: values[3]=7, found at index 3.

## Complexity
Time: O(log n). Extra space: O(1).

## Input format
First line: n. Second line: n sorted integers. Third line: target. Output: index or -1.

Example:
5
1 3 5 7 9
7

Output: 3

