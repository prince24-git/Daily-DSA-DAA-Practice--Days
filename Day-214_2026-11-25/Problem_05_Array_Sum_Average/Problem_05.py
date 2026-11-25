import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n integers.")

n = data[0]
numbers = data[1:n + 1]
total = sum(numbers)
average = total / n

print("Sum:", total)
print(f"Average: {average:.2f}")
