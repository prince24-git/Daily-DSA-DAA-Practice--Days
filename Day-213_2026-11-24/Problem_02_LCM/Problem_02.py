a, b = map(int, input().split())
x, y = a, b
while y != 0:
    x, y = y, x % y

if a == 0 or b == 0:
    print(0)
else:
    print(abs((a // x) * b))
