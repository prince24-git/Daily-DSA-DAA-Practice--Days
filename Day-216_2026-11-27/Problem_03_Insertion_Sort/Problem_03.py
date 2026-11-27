import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
values = data[1:n + 1]
for i in range(1, n):
    current = values[i]
    j = i - 1
    while j >= 0 and values[j] > current:
        values[j + 1] = values[j]
        j -= 1
    values[j + 1] = current

print("Sorted array:", *values)
