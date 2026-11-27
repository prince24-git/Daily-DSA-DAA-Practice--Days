import sys

data = list(map(int, sys.stdin.read().split()))
if len(data) < 2:
    raise SystemExit("Input n m, followed by the two sorted arrays.")
n, m = data[0], data[1]
if n < 0 or m < 0 or len(data) < n + m + 2:
    raise SystemExit("Invalid array sizes or missing values.")
first = data[2:2 + n]
second = data[2 + n:2 + n + m]
merged = []
i = j = 0
while i < n and j < m:
    if first[i] <= second[j]:
        merged.append(first[i])
        i += 1
    else:
        merged.append(second[j])
        j += 1
merged.extend(first[i:])
merged.extend(second[j:])
print("Merged array:", *merged)
