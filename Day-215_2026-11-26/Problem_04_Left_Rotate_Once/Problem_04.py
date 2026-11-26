import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
numbers = data[1:n + 1]
first = numbers[0]
for i in range(n - 1):
    numbers[i] = numbers[i + 1]
numbers[n - 1] = first

print("Rotated array:", *numbers)
