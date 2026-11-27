import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
values = data[1:n + 1]
for i in range(n - 1):
    minimum_index = i
    for j in range(i + 1, n):
        if values[j] < values[minimum_index]:
            minimum_index = j
    values[i], values[minimum_index] = values[minimum_index], values[i]

print("Sorted array:", *values)
