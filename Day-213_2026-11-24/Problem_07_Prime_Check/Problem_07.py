n = int(input())
prime = n >= 2
d = 2
while d * d <= n and prime:
    if n % d == 0:
        prime = False
    d += 1
print("Prime" if prime else "Not prime")
