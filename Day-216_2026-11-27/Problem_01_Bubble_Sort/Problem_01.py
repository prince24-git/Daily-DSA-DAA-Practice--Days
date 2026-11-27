import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
values = data[1:n + 1]
for end in range(n - 1, 0, -1):
    swapped = False
    for i in range(end):
        if values[i] > values[i + 1]:
            values[i], values[i + 1] = values[i + 1], values[i]
            swapped = True
    if not swapped:
        break

print("Sorted array:", *values)
