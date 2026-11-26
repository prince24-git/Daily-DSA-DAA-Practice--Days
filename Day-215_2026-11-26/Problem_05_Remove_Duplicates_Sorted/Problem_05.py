import sys

data = list(map(int, sys.stdin.read().split()))
if not data or data[0] < 1 or len(data) < data[0] + 1:
    raise SystemExit("Input n followed by n sorted integers.")

n = data[0]
numbers = data[1:n + 1]
write = 1
for i in range(1, n):
    if numbers[i] != numbers[write - 1]:
        numbers[write] = numbers[i]
        write += 1

print("Unique values:", *numbers[:write])
print("Count:", write)
