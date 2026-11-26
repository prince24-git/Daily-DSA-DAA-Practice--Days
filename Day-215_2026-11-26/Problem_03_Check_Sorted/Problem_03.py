import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
numbers = data[1:n + 1]
is_sorted = True
for i in range(1, n):
    if numbers[i] < numbers[i - 1]:
        is_sorted = False
        break

print("Sorted" if is_sorted else "Not sorted")
