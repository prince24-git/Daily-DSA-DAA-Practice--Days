import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
numbers = data[1:n + 1]
smallest = numbers[0]
smallest_index = 0

for i in range(1, n):
    if numbers[i] < smallest:
        smallest = numbers[i]
        smallest_index = i

print("Smallest number:", smallest)
print("Index:", smallest_index)
