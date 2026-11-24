n = int(input())
original = n
reversed_number = 0
while n > 0:
    reversed_number = reversed_number * 10 + n % 10
    n //= 10
print("Yes" if original == reversed_number else "No")
