import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 2:
    raise SystemExit("Input n, then n integers, then the target.")

n = data[0]
numbers = data[1:n + 1]
target = data[n + 1]
found_index = -1

for i in range(n):
    if numbers[i] == target:
        found_index = i
        break

print("Index:", found_index)
